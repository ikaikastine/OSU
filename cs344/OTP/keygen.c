#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Usage: %s length\n", argv[0]);
	}
	else {
		srand(time(NULL));
		int i;
		int len = atoi(argv[1]);
		char curChar, key[len+1];

		for (i = 0; i < len; i++) {
			curChar = "ABCDEFGHIJKLMNOPQRSTUVQXYZ "[random() % 27];
			key[i] = curChar;
		}
		key[len-1] = '\0';
		printf("%s\n", key);
	}

	return 0;
}
