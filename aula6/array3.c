#include <stdio.h>

int main() {

    int v[5];

    v[0] = 23;
    v[4] = 19;

    puts("Conteúdo antes da definição dos elementos...");
    for (int i = 0; i < 5; i ++)
        printf("v[%d]: %d\n", i, v[i]);
    
    puts("Conteúdo depois da definição dos elementos...");
    for (int i = 0; i < 5; i ++) {
        v[i] = i + 1;
        printf("v[%d]: %d\n", i, v[i]);
    }

    return 0;
}
