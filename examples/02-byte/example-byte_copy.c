// gcc example-byte_copy.c byte_copy.c

#include <stdio.h>
#include "byte.h"

int main()
{
    unsigned int len = 8;
    char out[8] = "ABCDEFG";
    char in[8] = "1234567";

    printf("Before copy:\n");
    printf("in: %s\n", in);
    printf("out: %s\n", out);

    byte_copy(out,len,in);

    printf("After copy:\n");
    printf("in: %s\n", in);
    printf("out: %s\n", out);

    return 0;
}
