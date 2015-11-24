#include "smallsh.h"

char **splitLine(char *line) 
{
    int buffer = 64;
    int pos = 0;
    char **tokens = malloc(buffer * sizeof(char*));
    char *token;

    token = strtok(line, TOK_DELIM);
    while (token != NULL) {
        tokens[pos] = token;
        numArgs++;
        pos++;

        if (pos >= buffer) {
            buffer += 64;
            tokens = realloc(tokens, buffer * sizeof(char*));
        }
        token = strtok(NULL, TOK_DELIM);
    }
    tokens[pos] = NULL;
    return tokens;
}