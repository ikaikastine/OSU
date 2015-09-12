/******************************************************
** Program: list.c
** Author: Kevin Stine
** Date: 06/06/2015
** Description: Various functions for implementation of a linked list
** Input: The user inputs numbers for the linked list which are passed to these functions
** Output: Return the head node in most functions
******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

/*********************************************************************
** Function: length()
** Description: returns the length of the linked list
** Parameters: struct node *len
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
int length(struct node *len) {
	struct node *cur = len;
	int size = 0;

	while (cur != NULL) {
		size++;
		cur = cur->next;
	}
	return size;
}

/*********************************************************************
** Function: print()
** Description: prints out the contents of the linked list
** Parameters: struct node *head, int length
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
void print(struct node *head, int length) {
	int i;
	struct node *current = head;

	for (i = 0; i < length; i++) {
		printf("%d ", current->val);
		current = current->next;
	}
}

/*********************************************************************
** Function: push()
** Description: creates a new node for the linked list and pushes 
** Parameters: struct node *head, int v
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
struct node *push(struct node *head, int v) {
	struct node *newNode = malloc(sizeof(struct node));
	assert (newNode != 0);
	newNode->val = v;
	newNode->next = head;
	head = newNode;
	return head;
}

/*********************************************************************
** Function: append()
** Description: appends to the linked list
** Parameters: struct node *head, struct node *tail, int v
** Pre-Conditions: must have a tail set to NULL
** Post-Conditions: none
*********************************************************************/ 
struct node *append(struct node *head, struct node *tail, int v) {
	struct node *newNode = malloc(sizeof(struct node));
	newNode->val = v;
	newNode->next = NULL;
	if (tail != NULL) {
		tail->next = newNode;
	}
	tail = newNode;
	if (head == NULL) {
		return newNode;
	}
	return head;
}

/*********************************************************************
** Function: clearList()
** Description: iterates through the linked list to delete all elements
** Parameters: struct node *head
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
struct node *clearList(struct node *head) {
	struct node *current, *temp;
	current = head;
	while (current != NULL) {
		temp = current->next;
		free(current);
		current = temp;
	}
	return temp;
}

/*********************************************************************
** Function: removeNode()
** Description: removes an individual node from the linked list
** Parameters: struct node *head, int v
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/ 
struct node *removeNode(struct node *head, int v) {
	struct node *current, *temp;
	current = head;
	while (current != NULL) {
		if(current->val == v) {
			if (current == head) {
				head = current->next;
				free(current);
				return head;
			}
			else {
				temp->next = current->next;
				free(current);
				return temp;
			}
		}
		else {
			temp = current;
			current = current->next;
		}
	}
	return 0;
}

/*********************************************************************
** Function: sort_ascending()
** Description: sorts the linked list in ascending order
** Parameters: struct node *head
** Pre-Conditions: Elements must be in the linked list
** Post-Conditions: none
*********************************************************************/ 
struct node *sort_ascending(struct node *head) {
	struct node *temp;
	struct node *temp2;

	if (head == NULL) {
		return;
	}
	temp = head;

	do {
		if ((temp->next->val < temp->val)) {
			temp2 = temp->next->next;
			temp->next->next = head;
			head = temp->next;
			temp->next = temp2;
			temp = head;
		}
		else {
			temp = temp->next;
		}
		
	} while (temp->next != NULL);
	return head;
}

/*********************************************************************
** Function: sort_descending() 
** Description: sorts the linked list in descending order
** Parameters: struct node *head
** Pre-Conditions: Elements must be in the linked list
** Post-Conditions: none
*********************************************************************/ 
struct node *sort_descending(struct node *head) {
	struct node *temp;
	struct node *temp2;

	if (head == NULL) {
		return;
	}
	temp = head;

	do {
		if ((temp->next->val > temp->val)) {
			temp2 = temp->next->next;
			temp->next->next = head;
			head = temp->next;
			temp->next = temp2;
			temp = head;
		}
		else {
			temp = temp->next;
		}
		
	} while (temp->next != NULL);
	return head;
}

/*********************************************************************
** Function: insert_middle() 
** Description: inserts into the middle of the linked list
** Parameters: struct node *head, int v, int len
** Pre-Conditions: Elements must be in the linked list
** Post-Conditions: none
*********************************************************************/
struct node *insert_middle(struct node *head, int v, int len) {
	int i;
	int midLen = (len / 2);
	struct node *newNode = malloc(sizeof(struct node));
	struct node *current;
	current = head;
	assert (newNode != 0);
	for (i = 0; i <= midLen; i++) {
		current = current->next;
	}
	newNode->val = v;
	newNode->next = head;
	head = newNode;
	return head;

}



//Showing Hannah what github is
