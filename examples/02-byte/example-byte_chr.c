// gcc example-byte_chr.c byte_chr.c

#include <stdio.h>
#include "byte.h"

int main()
{
    char *one = "ABCDEFGH";
    int c = 'E';

    unsigned int len = sizeof(one);
    unsigned int result;

    result = byte_chr(one,len,c);

    printf("result = %d\n", result);
    printf("check: %c\n", one[result]);

    return 0;
}
