#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#define BUFSIZE 1024

void error(const char *msg) {
    perror(msg);
    exit(1);
}

int main(int argc, char *argv[]) {
    int socketfd, portNum, n;
    struct sockaddr_in serv_addr;
    char buffer[BUFSIZE];

    if (argc < 4) {
        fprintf(stderr, "Usage: %s plaintext key port\n", argv[0]);
        exit(1);
    }

    portNum = atoi(argv[3]);
    socketfd = socket(AF_INET, SOCK_STREAM, 0);

    if (socketfd < 0) {
        error("Error opening socket.\n");
    }

    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(portNum);
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if (connect(socketfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
        printf("Error connecting to port %d.\n", portNum);
        exit(2);
    }

    snprintf(buffer, BUFSIZE, "%s", argv[1]);
    n = write(socketfd, buffer, strlen(buffer));
    if ( n < 0) {
        error("Error writing argv[1] to cket.\n");
    }

    sleep(1);

    snprintf(buffer, BUFSIZE, "%s", argv[2]);
    n = write(socketfd, buffer, strlen(buffer));
    if (n < 0) {
        error("Error writing to socket.\n");
    }

    bzero(buffer, BUFSIZE);
    n = read(socketfd, buffer, BUFSIZE);
    if (n < 0) {
        error("Error reading from socket.\n");
    }

    if (buffer == "error1: key too short") {
        error("Error key not long enough.\n");
    }
    else if (buffer == "error2") {
        error("Error bad characteres in file.\n");
    }
    else {
        printf("%s\n", buffer);
    }

    close(socketfd);

	return 0;
}
