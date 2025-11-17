#include <stdio.h>

int main() {

    int v[4] = {0};
    int *p = v;

    printf("vetor    : %p\n", v);
    printf("&vetor   : %p\n", &v);
    printf("ponteiro : %p\n", p);
    printf("&ponteiro: %p\n", &p);

    return 0;
}
