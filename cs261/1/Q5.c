/* CS261- Assignment 1 - Q.5*/
/* Name: Kevin Stine
 * Date: 1/15/15
 * Solution description: The program will print out the word from the user in studly caps
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*converts ch to upper case, assuming it is in lower case currently*/
char toUpperCase(char ch){
     return ch-'a'+'A';
}

/*converts ch to lower case, assuming it is in upper case currently*/
char toLowerCase(char ch){
     return ch-'A'+'a';
}

void studly(char* word){
     /*Convert to studly caps*/
    for (int i = 0; i < strlen(word); i++) {
        if (i % 2 == 0) {
            if (word[i] >= 'a' && word[i] <= 'z') {
                word[i] = toUpperCase(word[i]);
            }
        }
        else {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                word[i] = toLowerCase(word[i]);
            }
        }
    }
}

int main(){
    /*Read word from the keyboard using scanf*/
    char word[256];
    printf("Please enter a word: ");
    scanf("%s", word);
    /*Call studly*/
    studly(word);
    /*Print the new word*/
    printf("%s\n", word);
    return 0;
}
