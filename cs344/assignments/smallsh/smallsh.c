#include "smallsh.h"

int main()
{
	int exitCalled= 0;
	int exitStatus = 0;
	//int i;

	do {
		printf(": ");
		char *line = NULL;
		char **args;
		int fileDescriptor;
		numArgs = 0;
		backProcess = 0;

		line = getLine();
		if (line == NULL) {
			exitStatus = 0;
		}
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

		else if (strcmp(args[0], "pid") == 0) {
			printf("%d\n", getpid());
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
					exitStatus = execute(args);
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
					exitStatus = execute(args);
				}
			}
			dup2(savedStdout, 1);
			close(savedStdout);
			dup2(savedStdin, 0);
			close(savedStdin);
		}

		else {
			exitStatus = execute(args);
		}

		free(line);
		free(args);

	} while (!exitCalled);	
	return 0;
}