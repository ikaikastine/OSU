/* CS261- Assignment 1 - Q.4*/
/* Name: Kevin Stine
 * Date: 1/15/15
 * Solution description: The program will print the scores of students before and after being sorted
 */
 
#include <stdio.h>
#include <stdlib.h>

struct student{
	int id;
	int score;
};

void sort(struct student* students, int n){
     /*Sort the n students based on their score*/
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].score > students[j].score) {
                int a = students[i].score;
                students[i].score = students[j].score;
                students[j].score = a;
            }
        }
    }
     /* Remember, each student must be matched with their original score after sorting */
}

void generate(struct student* students, int n) {
    int i;
    for (i = 0; i < n; i++) {
        students[i].id = (rand() % 100 + 1);
        students[i].score = (rand() % 50 + 1);
    }
}

void print_arr(struct student* students, int n) {
    for (int i = 0; i < n; i++) {
        printf("ID - %d Score - %d\n", students[i].id, students[i].score);
    }
}

void deallocate(struct student* stud) {
    free (stud);
}

int main(){
    /*Declare an integer n and assign it a value.*/
    int n = 12;
    /*Allocate memory for n students using malloc.*/
    struct student *stud = malloc (n * sizeof(struct student));
    /*Generate random IDs and scores for the n students, using rand().*/
    generate(stud, n);
    /*Print the contents of the array of n students.*/
    printf("\nThe scores prior to being sorted:\n");
    print_arr(stud, n);
    /*Pass this array along with n to the sort() function*/
    sort(stud, n);
    /*Print the contents of the array of n students.*/
    printf("\nThe scores after being sorted:\n");
    print_arr(stud, n);
    deallocate(stud);
    return 0;
}
