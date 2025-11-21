#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  // Diretório 'fd' do processo de 'a.out'...
  puts("Antes do redirecionamento...");
  fflush(stdout);
  system("ls -l /proc/$(pidof io1)/fd");

  // Nome do arquivo...
  char *filename;
  if (argc > 1) {
    // Primeiro argumento...
    filename = argv[1];
  } else {
    // Dispositivo nulo...
    filename = "/dev/null";
  }

  // Redirecionamento...
  FILE* stream = freopen(filename, "r", stdin);
  if (!stream) {
    perror("freopen");
    return EXIT_FAILURE;
  }

  // Diretório 'fd' do processo de 'read1'...
  puts("Depois do redirecionamento...");
  fflush(stdout);
  system("ls -l /proc/$(pidof io1)/fd");

  return EXIT_SUCCESS;
}
