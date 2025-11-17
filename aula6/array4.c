#include <stdio.h>

#define VSIZE 5

void print_array(int v[], int size) {
    for (int i = 0; i < size; i++)
        printf("v[%d] => %d\n", i, v[i]);
}

int main() {
    int vetor[VSIZE];

    for (int i = 0; i < VSIZE; i ++) vetor[i] = i + 1;

    print_array(vetor, VSIZE);

    return 0;
}
