#include <stdio.h>

int quadrado(int base) {
    return base * base;
}

int main(void) {
    int num = 100000;

    printf("%d^2 = %d\n", num, quadrado(num));
    return 0;
}
