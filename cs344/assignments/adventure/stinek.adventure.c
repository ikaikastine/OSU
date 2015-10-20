#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

struct stat st = {0};

int main () {

	int pid = getpid();
	char myPID;
	myPID = pid;
	char path_dir = "stinek.adventure.c";
	cat myPID | path_dir;
	printf("Path_dir = %d", path_dir);
	const char *path = printf("stinek.adventure.%c", myPID);
	mkdir(path, 0777);	
	printf("I should have printed....");
 
	return 0;
}
