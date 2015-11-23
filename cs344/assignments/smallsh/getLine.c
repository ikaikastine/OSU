#include "smallsh.h"
#include <stdio.h>

char *getLine() {
    char *line = NULL;
    size_t size = 0;
    ssize_t read;

    getline(&line, &size, stdin);
    return line;
}