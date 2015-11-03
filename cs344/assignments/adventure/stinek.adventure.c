#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <errno.h>
#include <string.h>

struct Positions 
{
	char *start;
	char *connection;
	char *end;
};

struct Positions createRooms(char *directory) 
{
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
	char *currentFile = malloc(128);
	int i, j;

	for (i = 0; i < 7; i++) {
		sprintf(currentFile, "%s/%s", directory, room[i]);
		FILE *fp = fopen(currentFile, "w");
		if (fp == NULL) {
			perror ("Error opening file.");
		}
		else {
			fprintf(fp, "Room Name: %s\n", room[i]);
		}
		fclose(fp);
	}

	int initPos = rand() % 7;
	int endPos = rand() % 7;
	char *connection;
	int connectionNum, idx;
	char currentRoom[100];

	for(i = 0; i < 7; i++) {
		sprintf(currentFile, "%s/%s", directory, room[i]);

		FILE *fp = fopen(currentFile, "a");
		if (fp == NULL) {
			perror ("Error opening file.");
		}
		else {
			connectionNum = rand() % 4 + 3;
			idx = 0;
			for (j = 0; j < connectionNum; j++) {
				connection = room[idx];
				if (connection == room[i]) {
					idx++;
					connection = room[idx];
				}
				fprintf(fp, "CONNECTION %d: %s\n", j+1, connection);
				idx++;
			}
			if (i == initPos) {
				fprintf(fp, "ROOM TYPE: START_ROOM\n");
				location.start = room[i];
			}
			else if (i == endPos) {
				fprintf(fp, "ROOM TYPE: END_ROOM\n");
				location.end = room[i];
			}
			else {
				fprintf(fp, "ROOM TYPE: MID_ROOM\n");
			}
		}
		fclose(fp);
	}
	free(currentFile);
}

char *createDirectory(int pID) 
{
	char *directory = malloc(20);
	char *dirName = "stinek.adventure.";

	sprintf(directory, "%s%d", dirName, pID);

	struct stat st = {0};
	if (stat(directory, &st) == -1) {
		mkdir(directory, 0755);
	}
	return directory; 
}


int main ()
{
	int pid = getpid();
	printf("PID: %d\n", pid);

	char *roomsDirectory = createDirectory(pid);	
	
	createRooms(roomsDirectory);

	return 0;
}
