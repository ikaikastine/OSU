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

void shuffle(char **array, size_t n);

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
	shuffle(room, 10);
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


void beginAdventure(struct Positions location) 
{
	char *currentRoom = location.start;
	char *finalRoom = location.end;
	char *directory = location.connection;
	int stepCount = 0;
	int i, valid, c, connectionNum;
	char (*steps)[15] = malloc(sizeof *steps * 8);
	char (*contents)[15] = malloc(sizeof *contents * 8);
	char destination[15];

	char *currentFile = malloc(128);
	printf("seg fault at first strcmp");
	while (!(strcmp(currentRoom, finalRoom)) == 0) {
		printf("seg fault after first strcmp");
		sprintf(currentFile, "%s/%s", directory, currentRoom);
		FILE *fp = fopen(currentFile, "r");

		connectionNum = 0;

		if (fp) {
			while ((c = getc(fp)) != EOF) {
				if (c == '\n') {
					connectionNum++;
				}
			}
			connectionNum = connectionNum - 2;

			char str[20];
			fseek(fp, 11, SEEK_SET);
			fgets(str, 20, fp);
			int len = strlen(str);
			if(str[len-1] == '\n') {
				str[len-1] = 0;
			}
			strcpy(contents[0], str);

			for (i = 1; i <= connectionNum; i++) {
				fseek(fp, 14, SEEK_CUR);
				fgets(str, 20, fp);
				len = strlen(str);
				if(str[len-1] == '\n') {
					str[len-1] = 0;
				}
				strcpy(contents[i], str);
			}
			valid = 0;
			while (valid == 0) {
				printf("CURRENT LOCATION: %s\n", contents[0]);
				printf("POSSIBLE CONNECTIONS: ");
				for (i = 1; i <= connectionNum; i++) {
					if (i == connectionNum) {
						printf("%s.\n", contents[i]);
					}
					else {
						printf("%s, ", contents[i]);
					}
				}
				printf("WHERE TO? > ");
				scanf("%s", destination);
				for (i = 1; i <= connectionNum; i++) {
					if (strcmp(destination, contents[i]) == 0) {
						valid = 1;
						currentRoom = destination;
					}
				}
				if (valid != 1) {
					printf("\nHUH? I DON'T UNDERSTAND THAT ROOM. TRY AGAIN.\n");
				}
			}
			printf("\n");
			strcpy(steps[stepCount], currentRoom);
			stepCount++;
			fclose(fp);
		}
		printf("YOU HAVE FOUND THE END ROOM. CONGRATULATIONS!");
		printf("YOU TOOK %d STEPS. YOUR PATH TO VICTORY WAS:\n", stepCount);
		for (i = 0; i < stepCount; i++) {
			printf("%s\n", steps[i]);
		}
	}
	free(steps);
	free(contents);
	free (currentFile);
}

void shuffle(char **array, size_t n)
{
	struct timeval tv;
	gettimeofday(&tv, NULL);
	int usec = tv.tv_usec;
	srand48(usec);

	if (n > 1) {
        size_t i;
        for (i = n - 1; i > 0; i--) {
            size_t j = (unsigned int) (drand48()*(i+1));
            char* t = array[j];
            array[j] = array[i];
            array[i] = t;
        }
    }
}

int main ()
{
	srand(time(NULL));

	int pid = getpid();

	char *roomsDirectory = createDirectory(pid);	
	printf("makes it out of create directory");
	struct Positions location = createRooms(roomsDirectory);

	printf("printf before begin adventure");
	beginAdventure(location);
	printf("printf after begin adventure");
	free(roomsDirectory);

	return 0;
}