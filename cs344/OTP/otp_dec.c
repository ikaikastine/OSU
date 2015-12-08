#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#define BUFSIZE 1024

//Prints out error message
void error(const char * msg) {
    perror(msg);
    exit(0);
}

int main(int argc, char *argv[]) {
    int sockfd, portno, n;
    struct sockaddr_in serv_addr;
    char buffer[BUFSIZE];

    if (argc < 4) {
        fprintf(stderr, "Usage: %s ciphertext key port\n", argv[0]);
        exit(1);
    }

    portno = atoi(argv[3]);
    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    if (sockfd < 0) {
        perror("Error opening socket.\n");
        exit(1); 
    }

    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(portno);
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if (connect(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
        printf("Error. otp_dec could not find otp_dec_d.\n");
        exit(2);
    }

    snprintf(buffer, BUFSIZE, "%s", argv[1]);
    n = write(sockfd, buffer, strlen(buffer));
    if (n < 0) {
        error("Error writing argv[1] to socket.\n");
        exit(1);
    }

    sleep(1);

    snprintf(buffer, BUFSIZE, "%s", argv[2]);
    n = write(sockfd, buffer, strlen(buffer));
    if (n < 0) {
        error("Error writing to socket.\n");
        exit(1);
    }

    bzero(buffer, BUFSIZE);
    n = read(sockfd, buffer, BUFSIZE);
    if (n < 0) {
        error("Error reading from socket.\n");
        exit(1);
    }

    printf("%s\n", buffer);
    close(sockfd);

	return 0;
}
