#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <errno.h>
#include <string.h>

struct Positions {
	char *start;
	char *connection;
	char *end;
};

struct Positions createRooms(char *directory) {
	struct Positions location;
	location.connection = directory;

	char *room[10];
	room[0] = "Barracks";
	room[1] = "Prison";
	room[2] = "Library";
	room[3] = "Shrine";
	room[4] = "Crypt";
	room[5] = "Guardhouse";
	room[6] = "Laboratory";
	room[7] = "Armory";
	room[8] = "Bestiary";
	room[9] = "Garden";
	int bufferSize = 128;
	char *currentFile = malloc(128);
	int i, j;

	for (i = 0; i < 7; i++) {
		snprintf(currentFile, bufferSize, "%s/%s", directory, room[i]);
		FILE *fp = fopen(currentFile, "w");
		if (fp == NULL) {
			perror ("Error opening file.");
		}
		else {
			fprintf(fp, "Room Name: %s\n", room[i]);
		}
		fclose(fp);
	}



}

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


int main () {
	int pid = getpid();
	printf("PID: %d\n", pid);

	char *roomsDirectory = createDirectory(pid);	
	
	createRooms(roomsDirectory);

	return 0;
}
