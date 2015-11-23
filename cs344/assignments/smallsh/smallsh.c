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

int numArgs, backProcess;

#define TOK_DELIM " \t\r\n\a"

char *getLine() {
	char *line = NULL;
	size_t size = 0;
	getline(&line, &size, stdin);
	return line;
}

char **splitLine(char *line) {
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

//handles the signal SIGINT
void handle_SIGINT() {
	printf("\n"); //Catches CTRL-C and print newline 
}

//handles the signal SIGTERM
void handle_SIGTERM() {
	printf("Found your sigterm\n");
}

int launch(char **args) {
	pid_t pid, wpid;
	int status, exitStatus = 0;

	//Start signal catching
	struct sigaction handler;
	struct sigaction action;
	handler.sa_handler = handle_SIGINT;
	action.sa_handler = handle_SIGTERM;
	sigaction(SIGINT, &handler, NULL); //
	sigaction(SIGTERM, &action, NULL);

	pid = fork();

	if (pid == 0) {
		if (execvp(args[0], args) == -1) {
			printf("Command or file not recognized\n");
			exit(1);
		}
	}
	else if (pid < 0) {
		perror("smallsh");
	}
	else {
		do {
			if (backProcess == 0) {
				wpid = waitpid(pid, &status, WUNTRACED);
			}
			else if (backProcess == 1) {
				wpid = waitpid(-1, &status, WNOHANG);
			}
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	if (backProcess == 1) {
		printf("Background PID: %d\nExit Status: %d", pid, exitStatus);
	}
	if (status != 0 || WIFSIGNALED(status)) {
		exitStatus = 1;
	}
	else if (status != 0 || WTERMSIG(status)) {
		exitStatus = 1;
	}
	return exitStatus;
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
		backProcess = 0;

		line = getLine();
		args = splitLine(line);
		if(!(strncmp(args[numArgs - 1], "&", 1))) {
			backProcess = 1;
			args[numArgs - 1] = NULL;
		}
		if(args[0] == NULL || !(strncmp(args[0], "#", 1))) {
			exitStatus = 0;
		}

		//Builtin "cd"
		else if(strcmp(args[0], "cd") == 0) {
			if(args[1]) {
				if(chdir(args[1]) != 0) {
					printf("No such file or directory\n");
					exitStatus = 1;
				}
			}
			else {
				chdir(getenv("HOME"));
				exitStatus = 0;
			}
		}

		//Builtin "exit"
		else if(strcmp(args[0], "exit") == 0) {
			exitCalled = 1;
			exitStatus = 0;
		}

		//Builtin "status"
		else if(strcmp(args[0], "status") == 0) {
			printf("Exit status: %d\n", exitStatus);
			exitStatus = 0;
		}

		else if (numArgs == 3 && ((strcmp(args[1], ">") == 0) || (strcmp(args[1], "<") == 0) )) {
			int savedStdout, savedStdin;
			savedStdin = dup(0);
			savedStdout = dup(1);
			if (strcmp(args[1], ">") == 0) {
				fileDescriptor = open(args[2], O_WRONLY|O_CREAT|O_TRUNC, 0644);
				if (fileDescriptor == -1) {
					printf("No such file or directory\n");
					exitStatus = 1;
				}
				else {
					dup2(fileDescriptor, 1);
					args[1] = NULL;
					close(fileDescriptor);
					exitStatus = launch(args);
				}
			}
			else if (strcmp(args[1], "<") == 0) {
				fileDescriptor = open(args[2], O_RDONLY);
				if (fileDescriptor == -1) {
					printf("%s: No such file or directory\n", args[2]);
					exitStatus = 1;
				}
				else {
					dup2(fileDescriptor, 0);
					args[1] = NULL;
					close(fileDescriptor);
					exitStatus = launch(args);
				}
			}
			dup2(savedStdout, 1);
			close(savedStdout);
			dup2(savedStdin, 0);
			close(savedStdin);
		}

		else {
			exitStatus = launch(args);
		}

		free(line);
		free(args);


	} while (!exitCalled);	
	return 0;
}

int main () {
	runShell();
	return 0;
}
