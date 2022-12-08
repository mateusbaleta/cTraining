#include <stdio.h>

int main(void) {
    int port = 80;
    char ip[] = "192.168.0.1";
    float ver = 1.1;

    printf("Baleta Security\n");
    printf("Scan version: %.1f \n", ver);
    printf("Scanning host: %s on port %i \n", ip, port);
    return 0;

}