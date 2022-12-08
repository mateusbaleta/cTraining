#include <stdio.h>

int main(void){

    int port;
    char ip[16];

    printf("Baleta Security\n");

    printf("Type the IP: \n");
    fgets(ip, 16, stdin);

    printf("Type the PORT: \n");
    scanf("%i", &port);

    printf("Scanning Host: %s on port %i \n", ip, port);

    return 0;

}
