#include <stdio.h>
#include <stdlib.h>

void read_lines(FILE *strem, char *buf, int size);
void write_lines(FILE *strem, char *buf, int size);
void proc_file(FILE *strem, char *buf, int size);

int main(int argc, char **argv) {
  if (argc != 2) {
    fprintf(stderr, "Uso: %s ARQUIVO\n", argv[0]);
    return EXIT_FAILURE;
  }
  char *file = argv[1];

  FILE *fstr = fopen(file, "w+");
  if (!fstr) {
    perror("fopen");
    return EXIT_FAILURE;
  }

  char line[BUFSIZ];
  proc_file(fstr, line, BUFSIZ);

  fclose(fstr);

  return EXIT_FAILURE;
}

void proc_file(FILE *stream, char *buf, int size) {
  puts("Conteúdo anterior...");
  read_lines(stream, buf, size);

  puts("Novo conteúdo...");
  write_lines(stream, buf, size);

  rewind(stream);
  
  puts("Conteúdo atual...");
  read_lines(stream, buf, size);
}

void read_lines(FILE *file, char *buf, int size) {
  while (fgets(buf, size, file)) {
    printf("%s", buf);    
  }
}


void write_lines(FILE *file, char *buf, int size) {
  while (fgets(buf, size, stdin)) {
    fprintf(file, "%s", buf);    
  }
}
