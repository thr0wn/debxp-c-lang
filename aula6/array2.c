#include <stdio.h>

int main(void) {
    
    // 4 elementos x 4 bytes = 16 bytes
    int v[] = {1, 2, 3, 4}; 
    
    puts("Saltos pelos elementos (4 bytes)...");
    for (int i = 0; i < 4; i++) printf("%p\n", v + i);
    
    puts("Saltos pelo tamanho do vetor (4 x 4 bytes)...");
    for (int i = 0; i < 4; i++) printf("%p\n", &v + i);

    return 0;
}


