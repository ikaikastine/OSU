/* CS261- Assignment 1 - Q. 0*/
/* Name: Kevin Stine
 * Date: 1/15/15
 * Solution description: The program will print the address of x and the value of x after the function call
 */
 
#include <stdio.h>
#include <stdlib.h>

void fooA(int* iptr){
    /*Print the value of the integer pointed to by iptr*/
    printf("The value of the integer pointed to by iptr = %d\n", *iptr);
    /*Print the address pointed to by iptr*/
    printf("The address pointed to by iptr = %p\n", iptr);
    /*Print the address of iptr itself*/
    printf("The address of iptr = %p\n", &iptr);
}

int main(){
    
    /*declare an integer x*/
    int x;
    /*print the address of x*/
    printf("The address of x = %p\n", &x);
    /*Call fooA() with the address of x*/
    fooA(&x);
    /*print the value of x*/
    printf("The value of x = %d\n", x);
    return 0;
}
