#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

struct stat st = {0};

int main () {
	int numFiles = 7;
	FILE *files[numFiles];
	char filename[20];
  int i;

	int pid = getpid();
	printf("PID: %d\n", pid);

	//Create initial directory for files to be stored in
	mkdir("stinek.adventure.$$", 0777);	
	//Create first file
	
	for (i = 0; i < numFiles; i++) {
		sprintf(filename, "stinek.adventure.$$/file%d.c", i);
		files[i] = fopen (filename, "w");
	}
	//fp = fopen("/stinek.adventure.$$/

	return 0;
}
