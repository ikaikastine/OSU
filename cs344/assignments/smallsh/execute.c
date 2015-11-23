#include "smallsh.h"
#include <signal.h>

//handles the signal SIGINT
void handle_SIGINT() {
    printf("\n"); //Catches CTRL-C and print newline 
}

//handles the signal SIGTERM
void handle_SIGTERM() {
    printf("Found your sigterm\n");
}

int execute(char **args) {
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
    else if (status != 0 || WTERMSIG(status)) {
        exitStatus = 1;
    }
    return exitStatus;
}