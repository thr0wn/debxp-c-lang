#include <stdio.h>

// Imprime listas de strings...
void print_list(char *list[]);

int main(int argc, char **argv) {

    for (int i = 0; i < argc; i++)
        printf("argv[%d] = %s\n", i, argv[i]);
    
    print_list(argv);
    
    return 0;
}

void print_list(char *list[]) {
    int i = 0;
    while (list[i] != NULL) {
        printf("[%d] => %p => %s\n", i, list[i], list[i]);
        i++;
    }
}
