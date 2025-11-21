#include <stdio.h>

#define BUFMAX 10

// Remove a quebra de linha final do buffer...
void trim_string(char *str, int size);

int main(void) {
    char buf[BUFMAX];

    printf("Digite até %d caracteres: ", BUFMAX - 1);
    fgets(buf, BUFMAX, stdin);
    trim_string(buf, BUFMAX);
    
    printf("%s\n", buf);
    
    return 0;
}

// Remove a quebra de linha final do buffer...
void trim_string(char *str, int size) {
    int i = 0;
    while (i < size && str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    i++;
}
