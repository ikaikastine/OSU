#include <stdlib.h>
#include <stdio.h>


int main () {
	FILE *fp;
	char inputArray[102];
	int i;

	fp = fopen("test_cases_with_solutions.txt", "r+");
	if (fp == NULL) {
		fprintf(stderr, "File Error\n");
		exit(1);
	}
	if (fgets(inputArray, 102, fp) != NULL) {
		puts(inputArray);
	}
	printf("%s", inputArray);

	return 0;
}