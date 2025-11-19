#include <stdio.h>

void print_list(char *list[]);

int main(void) {
     
    char *str[] = {
        "carro",
        "bola",
        "peteca",
        NULL
    };
    
    int i;

    // Iterando os caracteres de str[0] com notação de vetores multidimensionais...
    i = 0;
    while (str[0][i] != '\0') {
        printf("str[0][%d] => %c\n", i, str[0][i]);
        i++;
    }
    putchar('\n');

    // Iterando caracteres de str[0] com aritmética de vetores...
    i = 0;
    while (*(str[0]+i) != '\0') {
        printf("*(str[0]+%d) => %c\n", i, *(str[0]+i));
        i++;
    }
    putchar('\n');

    // Iterando caracteres de str[0] com aritmética de ponteiros...
    i = 0;
    while (*(*str+i) != '\0') {
        printf("*(*str+%d) => %c\n", i, *(*str+i));
        i++;
    }
    putchar('\n');

    // Passando o endereço str[0] para um ponteiro...
    char *uma_coisa = str[0];

    // Iterando os caracteres no endereço com notação de subscrito...
    i = 0;
    while (uma_coisa[i] != '\0') {
        printf("uma_coisa[%d] => %c\n", i, uma_coisa[i]);
        i++;
    }
    putchar('\n');

    // Iterando caracteres no endereço com aritmética de ponteiros...
    i = 0;
    while (*(uma_coisa+i) != '\0') {
        printf("*(uma_coisa+%d) => %c\n", i, *(uma_coisa+i));
        i++;
    }
    putchar('\n');
    
    // Passando o endereço de str para um "ponteiro para ponteiro para char"...
    char **coisas = str;

    // Iterando o primeiro e os demais caracteres de cada string no endereço...
    i = 0;
    while (coisas[i] != NULL) {
        printf("coisas[%d] => %c:%s\n", i, coisas[i][0], coisas[i]+1);
        i++;
    }
    putchar('\n');

    // Passando o endereço de str para uma função... 
    print_list(str);
    
    return 0;
}


void print_list(char *list[]) {
    int i = 0;
    while (list[i] != NULL) {
        printf("list[%d]: %p => %p: %s\n", i, &list[i], list[i], list[i]);
        i++;
    }
}
