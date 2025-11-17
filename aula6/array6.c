#include <stdio.h>

int main() {

    char vstr[] = {'b', 'a', 'c', 'a', 'n', 'a', '\0'};
    // char vstr[] = "bacana";
    char *pstr = "calado";

    printf("%p --> %s\n", vstr, vstr);
    printf("%p --> %s\n", pstr, pstr);
    
    return 0;
}
