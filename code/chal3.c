#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void getpath()
{
        char buffer[64];
    unsigned int ret;
        printf("input path please: "); fflush(stdout);
        gets(buffer);
        ret = __builtin_return_address(0);
        if((ret & 0xff000000) == 0xff000000) {
                printf("nah no smashing (%p)\n", ret);
                _exit(1);
        }
        printf("got path %s\n", buffer);
}

int main(int argc, char **argv)
{
        getpath();
}
