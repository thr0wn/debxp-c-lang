#include <stdlib.h>

int main(void) {
   system("ls -l /proc/$(pidof io0.out)/fd");

   return 0;
}
