// gcc hello-djb.c buffer*.c str_*.c byte_*.c error*.c

#include "exit.h"
#include "buffer.h"

int main()
{
    buffer_puts(buffer_1,"Hello DJB!\n");
    buffer_flush(buffer_1);
    _exit(0);
}
