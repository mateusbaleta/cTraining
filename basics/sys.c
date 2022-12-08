#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    printf("Open TCP ports: \n");
    system("netstat -nlpt");
    return 0;

}
