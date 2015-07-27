/* CS261- Assignment 1 - Q.3*/
/* Name: Kevin Stine
 * Date: 1/15/15
 * Solution description: The program will create an array of random numbers and sort them
 */
 
#include <stdio.h>
#include <stdlib.h>

void sort(int* number, int n){
    /*Sort the given array number , of length n*/
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (number[i] > number[j]) {
                int a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
}

int main(){
    /*Declare an integer n and assign it a value of 20.*/
    int n = 20;
    /*Allocate memory for an array of n integers using malloc.*/
    int *arr = malloc(n*sizeof(int));
    /*Fill this array with random numbers between 0 and n, using rand().*/
    for (int i = 0; i < n; i++) {
        arr[i] = (rand() % n + 0);
    }
    /*Print the contents of the array.*/
    printf("The initial array:\n");
    for (int y = 0; y < n; y++) {
        printf("%d\n", arr[y]);
    }
    /*Pass this array along with n to the sort() function.*/
    sort(arr, n);
    /*Print the contents of the array.*/    
    printf("The array after the sort call\n");
    for (int z = 0; z < n; z++) {
        printf("%d\n", arr[z]);
    }
    return 0;
}
