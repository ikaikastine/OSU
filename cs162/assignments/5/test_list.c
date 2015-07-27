/******************************************************
** Program: test_list.c
** Author: Kevin Stine
** Date: 06/06/2015
** Description: Tests to make sure a linked list is implemented correctly
** Input: User input for numbers to be added to a linked list
** Output: The contents of the linked list are printed out
******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main () {
	char ans[2];
	int num;
	struct node *head = NULL;
	struct node *tail = NULL; //For use in the extra credit which uses the append function
	do {
		do {
		printf("Enter a number: ");
		scanf("%d", &num);
		head = push(head, num);//Can change to append
		//head = insert_middle(head, num, length(head));
		//head = append(head, tail, num);//commented out for now, as the push function works correctly. Append adds the contents, however sorting it causes some issues
		printf("Do you want another num (y or n): ");
		scanf("%1s",ans);
		} 
		while(ans[0] == 'y');

		printf("Sort ascending or descending (a or d)? ");
		scanf("%1s", ans);
		if(ans[0] == 'a') {
			head=sort_ascending(head);
		}
		else if(ans[0] == 'd') {
			head=sort_descending(head);
		}
		printf("Your linked list is: \n");
		print(head, length(head));
		printf("\nDo you want to do this again (y or n)? ");
		scanf("%1s",ans);
		if(ans[0] == 'y') { 
			head = clearList(head);
		}
	} 
	while(ans[0] == 'y');
	return 0;
}