#include <stdio.h>
#include <unistd.h>

int main(void) {
  if (isatty(0)) {
    puts("STDIN ligada ao terminal.");
  } else {
    puts("STDIN ligada a um arquivo ou pipe.");
  }

  return 0;
}
