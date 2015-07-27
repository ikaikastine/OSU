/* CS261- Assignment 1 - Q.2*/
/* Name: Kevin Stine
 * Date: 1/15/15
 * Solution description: THe program will print out the values x, y, and z before and after the function call
 */
 
#include <stdio.h>
#include <stdlib.h>

int foo(int* a, int* b, int c){
    /*Set a to double its original value*/
    *a = *a*2;
    /*Set b to half its original value*/
    *b = *b/2;
    /*Assign a+b to c*/
    c = (*a + *b);
    /*Return c*/
    return c;
}

int main(){
    /*Declare three integers x,y and z and initialize them to 7, 8, 9 respectively*/
    int x = 7;
    int y = 8;
    int z = 9;
    int c;
    /*Print the values of x, y and z*/
    printf("x = %d, y = %d, z = %d", x, y, z);
    /*Call foo() appropriately, passing x,y,z as parameters*/
    c = foo(&x, &y, z);
    /*Print the value returned by foo*/
    printf("\nFoo returned: %d", c);
    /*Print the values of x, y and z again*/
    printf("\nx = %d, y = %d, z = %d\n", x, y, z);
    /*Is the return value different than the value of z?  Why?*/
    return 0;
}
    
    
