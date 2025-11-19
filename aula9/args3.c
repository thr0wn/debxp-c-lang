
#include <stdio.h>
#include <stdlib.h>
extern char **environ;
void print_list(char *list[]);
int main(int argc, char **argv, char **envp) {
    // Listando ponteiro 'environ'...
    print_list(environ);
    putchar('\n');
    
    // Função getenv...
    char *env = getenv("SHELL");
    printf("env = %s\n", env);
    putchar('\n');
    // Listando parâmetro 'envp'...
    print_list(envp);
    return 0;
}
void print_list(char *list[]) {
    int i = 0;
    while (list[i] != NULL) {
        printf("[%d] => %p => %s\n", i, list[i], list[i]);
        i++;
    }
}
