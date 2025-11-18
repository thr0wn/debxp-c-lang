#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_LEN 256  // Quantidade de bytes para as linhas.
#define PATH_LEN 256  // Quantidade de bytes para os caminhos. 
#define PERM_LEN 5    // Quantidade de bytes para as permissões.
#define PROG_END 5    // Fim das linhas do programa.

typedef unsigned long u64t;
typedef int i32t;

void read_maps();

int main(void) {
    read_maps();
    return 0;
}

/*
 * Lê e imprime o conteúdo de /proc/self/maps filtrando
 * as faixas dos segmentos de memória.
 */
void read_maps() {
    // Define um descritor de arquivos para ler /proc/self/maps...
    FILE *fd = fopen("/proc/self/maps", "r");
    
    // Terminar no caso de erro...
    if (!fd) {
        perror("Erro ao abrir /proc/self/maps");
        exit(EXIT_FAILURE);
    }

    char line[LINE_LEN];     // Linhas lidas do arquivo.
    u64t start;              // Endereço inicial.
    u64t end;                // Endereço final.
    char perm[PERM_LEN];     // Permissões.
    char path[PATH_LEN];     // Caminho do arquivo carregado.
    i32t current_line = 1;   // Linha atual.
    
    // Itera as linhas de /proc/self/maps...
    while (fgets(line, sizeof(line), fd)) {

        // Zera a string em 'path'...
        path[0] = '\0';
        
        /*
         * Analisa a linha conforme os campos de /proc/self/maps:
         * ADDR_START-ADDR_END PERM FILE_OFFSET DEVICE INODE FILE_PATH
         */
        sscanf(line, "%lx-%lx %4s %*s %*s %*s %255[^\n]", &start, &end, perm, path);

        // Impressão dos segmentos do código...
        if (current_line <= PROG_END) {
            printf("0x%lx-0x%lx %s --> ", start, end, perm);
            switch (current_line) {
                case 1:
                    puts("Tabela de cabeçalhos do programa");
                    break;
                case 2:
                    puts("Código do programa (.text)");
                    break;
                case 3:
                    puts("Dados constantes (.rodata)");
                    break;
                case 4:
                    puts("Tabela de dados globais e dinâmicos");
                    break;
                case 5:
                    puts("Variáveis globais e estáticas (.data e .bss)");
                    break;
            }
            current_line++;
            continue;
        }

        // Impressão da faixa do HEAP...
        if (strstr(path, "[heap]")) {
            printf("0x%lx-0x%lx %s --> [HEAP]\n", start, end, perm);
            continue;
        }

        // Impressão da faixa da STACK...
        if (strstr(path, "[stack]")) {
            printf("0x%lx-0x%lx %s --> [STACK]\n", start, end, perm);
            continue;
        }
        
        // Demais linhas com caminho...
        if (path[0] != '\0') printf("0x%lx-0x%lx %s --> %s\n", start, end, perm, path);
    }
    
    // Fecha o descritor de arquivos...
    fclose(fd);
}
