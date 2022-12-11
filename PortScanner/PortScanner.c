#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int argc, char *argv[]){

    int mysocket;
    int connection;

    int port;
    int init = 0;
    int final = 65535;
    char *dest;

    dest = argv[1];

    struct sockaddr_in target;

    if (argc <= 1){
        printf("Usage: ./PortScanner 192.168.0.1\n");
        return 0;
    }

    for (port = init; port < final; port++){

        mysocket = socket(AF_INET, SOCK_STREAM, 0);

        target.sin_family = AF_INET;
        target.sin_port = htons(port);
        target.sin_addr.s_addr = inet_addr(dest);
        
        connection = connect(mysocket, (struct sockaddr *)&target, sizeof target);

        if(connection == 0){
            printf("Port %d - status [OPEN] \n", port);
            close(mysocket);
            close(connection);
        } else {
            close(mysocket);
            close(connection);
        }
}
}