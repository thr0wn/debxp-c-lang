#include <stdio.h>

// Soma os elementos de um vetor de tipo float...
float farr_sum(float arr[], int size);

// Média dos elementos de um vetor do tipo float...
float farr_avg(float arr[], int size);

// Imprime as notas...
void print_grades(float arr[], int size);


#define NBIM 4

int main(void) {

    float notas[NBIM];

    notas[0] = 7.5;
    notas[1] = 9.0;
    notas[2] = 8.3;
    notas[3] = 8.6;

    /* Cálculo e impressão por iteração direta */
    puts("Cálculo e impressão usando for:");
    puts("============");
    float sum = 0;
    for (int i = 0; i < NBIM; i++) {
        sum += notas[i];
        printf("Bim. %d: %.1f\n", i + 1, notas[i]);
    }
    puts("------------");
    printf("Média : %.1f\n", sum / NBIM);
    puts("============");

    // Cálculo e impressão por funções
    puts("\nCálculo e impressão usando funções:");
    puts("============");
    print_grades(notas, NBIM);
    puts("------------");
    printf("Média : %.1f\n", farr_avg(notas, NBIM));
    puts("============");
    
    return 0;
}


// Média dos elementos de um vetor do tipo float...
float farr_avg(float arr[], int size) {
    return farr_sum(arr, size) / size;
}

// Soma os elementos de um vetor de tipo float...
float farr_sum(float arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

// Imprime as notas...
void print_grades(float arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("Bim. %d: %.1f\n", i + 1, arr[i]);
}

