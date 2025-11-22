#include <stdio.h>
#include <unistd.h>

#define BUFFMAX 10

int main(int argc, char **argv) {
  char buf[BUFFMAX];
  ssize_t bytes = 0;

  puts("Testing output.");
  fflush(stdout);
  while ((bytes = read(STDIN_FILENO, buf, BUFFMAX - 1)) > 0) {
    buf[bytes] = '\0';
    printf("Testing input: %s", buf);
  }
}
