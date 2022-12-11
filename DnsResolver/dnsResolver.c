#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]){

    char use[40] = "Usage: ./dnsResolver google.com";

    if (argc <= 1){
        printf("%s\n", use);
        return 0;
    }

    struct hostent *target = gethostbyname(argv[1]);
    printf("IP: %s\n", inet_ntoa(*((struct in_addr *)target->h_addr_list)));

    if (target == NULL){
        printf("%s\n", use);
    }
    
}
