#include <stdio.h>

#define BUFMAX 10

int main(void) {
    char buf[BUFMAX];

    printf("Digite até %d caracteres: ", BUFMAX - 1);
    fgets(buf, BUFMAX, stdin);
    printf("%s\n", buf);
    
    return 0;
}
