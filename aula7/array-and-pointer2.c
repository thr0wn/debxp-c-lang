#include <stdio.h>

int main() {

    /*
    Notações de acesso:

    ===============================================
    | Expressa | Aritmética       | Subscrito     |
    ===============================================
    | Valor    | *(nome + índice) | nome[índice]  |
    |----------+------------------+---------------|
    | Endereço | nome + índice    | &nome[índice] |
    ===============================================
    */
    
    long s = (long int)"banana";
    printf("%lx\n\n", s);

    char v[] = {65, 66, 67, 68, 69, 0};
    char *p  = "FGHIJ";

    // Impressão do vetor...
    printf("v[2]    : %c (%d) --> &v[2]: %p\n", v[2], v[2], &v[2]);
    printf("*(v + 2): %c (%d) --> v + 2: %p\n", *(v + 2), *(v + 2), v + 2);

    // Impressão do ponteiro...
    printf("p[2]    : %c (%d) --> &p[2]: %p\n", p[2], p[2], &p[2]);
    printf("*(p + 2): %c (%d) --> p + 2: %p\n", *(p + 2), *(p + 2), p + 2);


    return 0;
}
