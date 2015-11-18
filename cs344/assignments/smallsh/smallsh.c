#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <singla.h>

int numArgs, isbg;

char *getLine() {
	char *line = NULL;
	ssize_t bufsize = 0;
	getline(&line, &bufsize, stdin);
	return line;
}

int runShell() {
	int exitCalled= 0;
	int exitStatus = 0;
	int i;

	do {
		printf(": ");
		char *line = NULL;
		char **args;
		int fileDescriptor;
		numArgs = 0;
		isbg = 0;

		line = getLine();
	} while (!exitCalled);	
}

int main () {

	runShell();



	return 0;
}
