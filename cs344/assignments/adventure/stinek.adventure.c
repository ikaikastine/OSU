#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <errno.h>
#include <string.h>

struct stat st = {0};

struct Positions {
	char *start;
	char *mid;
	char *end;
};

char *createDirectory(int pID) {
	char *directory = malloc(20);
	char *dirName = "stinek.adventure.";

	sprintf(directory, "%s%d", dirName, pID);

	struct stat st = {0};
	if (stat(directory, &st) == -1) {
		mkdir(directory, 0755);
	}
	return directory; 
}

/*
void populateFiles(int files) {
	int i;
	FILE *fp;
	for (i = 0; i < files; i++) {
		fp = fopen("stinek.adventure.$$/file%d.c", i);
		fprintf(fp, "Hello World\n");
	}
}
*/


int main () {
	int numFiles = 7;
	FILE *files[numFiles];
	char filename[20];
  int i;

	int pid = getpid();
	printf("PID: %d\n", pid);

	//Create initial directory for files to be stored in
	//Create first file
	createDirectory(pid);	
	//for (i = 0; i < numFiles; i++) {
	//	sprintf(filename, "stinek.adventure.$$/file%d.c", i);
	//	files[i] = fopen (filename, "w");
	//}
	//populateFiles(numFiles);
	return 0;
}
