#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

struct stat st = {0};

int main () {
	FILE *fp;

	int pid = getpid();
	printf("PID: %d\n", pid);

	//Create initial directory for files to be stored in
	mkdir("stinek.adventure.$$", 0777);	
	//Create first file
	fp = fopen("/stinek.adventure.$$/
	 
	return 0;
}
