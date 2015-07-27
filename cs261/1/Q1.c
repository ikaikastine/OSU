/* CS261- Assignment 1 - Q.1*/
/* Name: Kevin Stine
 * Date: 1/15/15
 * Solution description: The program will output the IDs and Scores for 10 students
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct student{
	int id;
	int score;
};

struct student* allocate(){
    /*Allocate memory for ten students*/
    struct student *stud = malloc(10 * sizeof(struct student));
    /*return the pointer*/
    return stud;
}

void generate(struct student* students){
     /*Generate random ID and scores for 10 students, ID being between 1 and 10, scores between 0 and 100*/
    for (int i = 0; i < 10; i++) {
        students[i].id = (rand() % 10 + 1);
        students[i].score = (rand() % (100 - 0 + 1) + 0);
    }
}

void output(struct student* students){
     /*Output information about the ten students in the format:
              ID1 Score1
              ID2 score2
              ID3 score3
              ...
              ID10 score10*/
    for (int i = 0; i < 10; i++) {
        printf("ID: %d\nScore: %d\n", students[i].id, students[i].score);
    }
}

void summary(struct student* students){
     /*Compute and print the minimum, maximum and average scores of the ten students*/
    int min = 100;
    int max = 0;
    int avg = 0;
    
    for (int i = 0; i < 10; i++) {
        if (students[i].score < min) {
            min = students[i].score;
        }
        if (students[i].score > max) {
            max = students[i].score;
        }
        avg = avg + students[i].score;
    }
    avg = avg/10;
    printf("Min: %d\nMax:%d\nAvg: %d\n", min, max, avg);
}

void deallocate(struct student* stud){
     /*Deallocate memory from stud*/
    free(stud);
}

int main(){
    struct student* stud = NULL;
    
    /*call allocate*/
    stud = allocate();
    /*call generate*/
    generate(stud);
    /*call output*/
    output(stud);
    /*call summary*/
    summary(stud);
    /*call deallocate*/
    deallocate(stud);
    return 0;
}
