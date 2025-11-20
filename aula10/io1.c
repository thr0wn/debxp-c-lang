#include <stdio.h>
#include <stdlib.h>

int main(void) {
    puts("Processo do programa:");
    fflush(stdout);
    system("ls -l /proc/$(pidof a.out)/fd");

    puts("\nProcesso do cat:");
    fflush(stdout);
    system("ls -l /proc/$(pidof cat)/fd");
    return 0;
}
