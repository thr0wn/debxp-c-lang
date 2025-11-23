#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    fprintf(stderr, "Uso: %s ARQUIVO\n", argv[0]);
    return EXIT_FAILURE;
  }
  char *file = argv[1];

  FILE *fstr = fopen(file, "w");
  if (!fstr) {
    perror("fopen");
    return EXIT_FAILURE;
  }

  char line[BUFSIZ]; // Buffer para acumular cada linha lida
  while (fgets(line, BUFSIZ, stdin)) {
    fprintf(fstr, "%s", line);
  }

  fclose(fstr);

  return EXIT_FAILURE;
}
