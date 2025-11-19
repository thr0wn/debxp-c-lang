#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

long str2int(char *str) {
 
    int num;     // Recebe o inteiro convertido.
    char *end;   // Recebe o endereço onde termina o inteiro na string.

    errno = 0;   // Zerar a variável global 'errno'.

    // Converte a parte numérica inicial de 'str' pata long int.
    num = strtol(str, &end, 10);

    // Checagem de erros...
    if (str == end) {
        // A parte inicial da string não era numérica...
        fprintf(stderr, "Nenhum dígito encontrado!\n");
        exit(EXIT_FAILURE);
    } else if (errno == ERANGE) {
        // O número está fora dos limites do tipo 'long int'...
        fprintf(stderr, "Número fora dos limites!\n");
        exit(EXIT_FAILURE);   
    } else if (*end != '\0') {
        // Caracteres não convertidos restantes...
        fprintf(stderr, "Caracteres inválidos: %s\n", end);
        exit(EXIT_FAILURE);   
    }
    
    return num;
}


int main(int argc, char **argv) {
    int soma = 0;
    int num;
    
    for (int i = 1; i < argc; i++) {
        num = str2int(argv[i]);
        if (i == 1) {
            printf("%d ", num);
        } else {
            printf("+ %d ", num);
        }
        soma += num;
    }
    printf("= %d\n", soma);
    
    return 0;
}
