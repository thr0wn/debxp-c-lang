#include <stdio.h>
#include <unistd.h>

#define BUFMAX 10

void flush_tty_buffer(void) {
    char c;
    while (read(STDIN_FILENO, &c, 1) == 1 && c != '\n');
}

int main(void) {

    char buf[BUFMAX];
    ssize_t bytes = 0;

    printf("Digite algo: ");
    fflush(stdout);

    if((bytes = read(STDIN_FILENO, buf, BUFMAX - 1)) <= 0) {
        return 1;               // Erro ou nada foi lido
    }
    
    // Tratamento do terminador nulo...
    buf[bytes] = '\0';
    
    if (buf[bytes - 1] == '\n') {
        // Remoção condicional da quebra de linha...
        buf[bytes - 1] = '\0';
    } else {
        // Esvaziamento condicional do buffer do terminal...
        flush_tty_buffer();     // Ou flush_stdin
    }   

    printf("%s\n", buf);
    
    return 0;
}
