#include <stdio.h>

int main(void) {

    // Declaração do vetor...
    float notas[4];

    // Definição individual dos elementos...
    notas[0] = 7.5;
    notas[1] = 9.0;
    notas[2] = 8.3;
    notas[3] = 8.6;

    // Inicialização do vetor...
    int vetor[3] = {1, 2, 3};
    
    // Inicialização sem número de elementos...
    char c[] = {65, 66, 67, 68, 69}; // char[5]
    char str[] = "string"; // = {'s', 't', 'r', 'i', 'n', 'g', '\0'};

    // Inicialização parcial...
    int n[6] = {1, 2, 3}; // = {1, 2, 3, 0, 0, 0};

    // Inicialização com zeros...
    int z[5] = {0}; // = {0, 0, 0, 0, 0};

    // Inicialização com elementos de mesmo valor...
    int r[4] = {23}; // = {23, 0, 0, 0};

    for (int i = 0; i < 4; i++) r[i] = 23;


    return 0;
}
