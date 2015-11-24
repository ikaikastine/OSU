#ifndef SMALLSH_H
#define SMALLSH_H

#define TOK_DELIM " \t\r\n\a"
#define bufferSize 1024

int numArgs, backProcess;

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>

char *getLine();

char **splitLine(char *line);

int execute(char **args);

void handle_SIGINT();

void handle_SIGTERM();

#endif
