// gcc hello-world.c buffer*.c str_*.c byte_*.c error*.c

#include "exit.h"
#include "buffer.h"

int main()
{
    buffer_putsflush(buffer_1,"Hello World!\n");
    _exit(0);
}
