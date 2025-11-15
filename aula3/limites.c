#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <locale.h>

int main(void) {

    setlocale(LC_NUMERIC, "");
    
    puts("Tipo               Bytes  Limites");
    puts("========================================================================");
    printf("char                (%zu)   %d a %d\n",      sizeof(char),                   SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char       (%zu)   %d a %d\n",      sizeof(unsigned char),          0,         UCHAR_MAX);
    printf("short               (%zu)   %'d a %'d\n",    sizeof(short),                  SHRT_MIN,  SHRT_MAX);
    printf("unsigned short      (%zu)   %d a %'d\n",     sizeof(unsigned short),         0,         USHRT_MAX);
    printf("int                 (%zu)   %'d a %'d\n",    sizeof(int),                    INT_MIN,   INT_MAX);
    printf("unsigned int        (%zu)   %d a %'u\n",     sizeof(unsigned int),           0,         UINT_MAX);
    printf("long int            (%zu)   %'ld a %'ld\n",  sizeof(long int),               LONG_MIN,  LONG_MAX);
    printf("unsigned long int   (%zu)   %d a %'lu\n",    sizeof(long unsigned int),      0,         ULONG_MAX);
    printf("long long           (%zu)   %'ld a %'ld\n",  sizeof(long long int),          LLONG_MIN, LLONG_MAX);
    printf("unsigned long long  (%zu)   %d a %'llu\n",   sizeof(unsigned long long int), 0,         ULLONG_MAX);
    printf("float               (%zu)   %.2E a %.2E\n",  sizeof(float),                  FLT_MIN,   FLT_MAX);
    printf("double              (%zu)   %.2E a %.2E\n",  sizeof(double),                 DBL_MIN,   DBL_MAX);
    printf("long double         (%zu)  %.2LE a %.2LE\n", sizeof(long double),            LDBL_MIN,  LDBL_MAX);
    
    return 0;
}
