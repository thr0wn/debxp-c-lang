#include <stdio.h>
#include <stdlib.h>

int main(void) {
    puts("Processo do programa:");
    fflush(stdout);
    system("ls -l /proc/$(pidof io1)/fd");

    puts("\nProcesso do cat:");
    fflush(stdout);
    system("ls -l /proc/$(pidof cat)/fd");
    return 0;
}
