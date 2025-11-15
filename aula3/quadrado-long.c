#include <stdio.h>

unsigned long quadrado(long base) {
    return base * base; /* Qual é o tipo dessa expressão? */
}

int main(void) {
    long num = 100000;

    printf("%ld^2 = %lu\n", num, quadrado(num));
    return 0;
}
