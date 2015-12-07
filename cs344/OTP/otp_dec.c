#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#define BUFSIZE 1024

void error(const char * msg) {
    perror(msg);
    exit(0);
}

int main(int argc, char *argv[]) {
    int socketfd, portNum, n;
    struct sockaddr_in serv_addr;
    char buffer[BUFSIZE];

    if (argc < 4) {
        fprintf(stderr, "Usage: %s ciphertext key port\n", argv[0]);
        exit(1);
    }

    portNum = atoi(argv[3]);
    socketfd = socket(AF_INET, SOCK_STREAM, 0);

    if (socketfd < 0) {
        perror("Error opening socket.\n");
        exit(1); 
    }

    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(portNum);
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if (connect(socketfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
        printf("Error. otp_dec could not find otp_dec_d.\n");
        exit(2);
    }

    snprintf(buffer, BUFSIZE, "%s", argv[1]);
    n = write(socketfd, buffer, strlen(buffer));
    if (n < 0) {
        error("Error writing argv[1] to socket.\n");
        exit(1);
    }

    sleep(1);

    snprintf(buffer, BUFSIZE, "%s", argv[2]);
    n = write(socketfd, buffer, strlen(buffer));
    if (n < 0) {
        error("Error writing to socket.\n");
        exit(1);
    }

    bzero(buffer, BUFSIZE);
    n = read(socketfd, buffer, BUFSIZE);
    if (n < 0) {
        error("Error reading from socket.\n");
        exit(1);
    }

    printf("%s\n", buffer);
    close(socketfd);

	return 0;
}
