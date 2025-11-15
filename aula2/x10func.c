#include <stdio.h>

/* Protótipo da função x10 */
int x10(int num);

int main(void) {
    int num;

    num = 5;

    printf("%d x 10 = %d\n", num, num * 10);
    return 0;
}

/* Definição/implementação da função x10 */
int x10(int num) {
    return 10 * num;
}
