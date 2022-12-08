#include <stdio.h>

int main(int argc, char const *argv[]){

    int i;
    char *ip;
    ip = argv[1];
    if (argc < 2)
    {
        printf("Usage: ./LoopNArgs.c 192.168.0.1 8080\n");
    } else {
    for (i = 0; i <= 10; i++)
    {
        printf("Scanning host %s.%i \n", argv[1], i);
    }
    }
}
