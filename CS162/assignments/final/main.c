/******************************************************
** Program: main.c
** Author: Kevin Stine
** Date: 06/10/2015
** Description: Main file to test a mergeSort algorithm
** Input: None
** Output: Sorted list
******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "merge.h"

#define GREEN "\E[32m"
#define RED "\E[31m"
#define CLEAR "\E[0m"

void insertNodes(struct node **head, int val) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->info = val;
    newNode->next = *head;
    *head = newNode;
}

void printList(struct node *node, int val) {
    int i;
    struct node *cur = node;
    for (i = 0; i < val; i++) {
        printf("%d ", cur->info);
        cur = cur->next;
    }
}

int lengthList(struct node *len) {
    struct node *cur = len;
    int size = 0;
    
    while (cur != NULL) {
        size++;
        cur = cur->next;
    }
    return size;
}

int main() {
    struct node *head;
    struct node *tail;
    
    //Test cases for different values
    insertNodes(&head, 1);
    insertNodes(&head, 2);
    insertNodes(&head, 3);
    insertNodes(&head, 4);
    insertNodes(&head, 5);
    insertNodes(&head, 6);

    //Prints the elements of the linked list before sorting
    printf("%sList before sorting:%s\n", RED, CLEAR);
    printList(head, lengthList(head));
    printf("\n");

    //Calls the sort function
    mergeSort(&head, &tail);

    //Prints the elements of the linked list after sorting
    printf("\n%sList after sorting:%s\n", GREEN, CLEAR);
    printList(head, lengthList(head));
    printf("\n");
    
    return 0;
}