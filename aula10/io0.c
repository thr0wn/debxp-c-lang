#include <stdlib.h>

int main(void) {
   system("ls -l /proc/$(pidof io0)/fd");

   return 0;
}
