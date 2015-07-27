#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

int length (struct node *len) {
	struct node *cur = len;
	int size = 0;

	while (cur != NULL) {
		size++;
		cur = cur->next;
	}
	return size;
}

void push(struct node **head, int v) {
	struct node *newNode = malloc(sizeof(struct node));
	assert (newNode != 0);
	newNode->val = v;
	newNode->next = *head;
	*head = newNode;
}

void append(struct node **head, int v) {
	struct node *newNode = malloc(sizeof(struct node));
	struct node *current = malloc(sizeof(struct node));
	current = head;
	newNode->val = v;
	//if (current->next == NULL) {
	//	newNode->next = *head;
	//}
	while (current->next != NULL) {
		current = current->next;
	}
	current->next = newNode;
	newNode->next = NULL;
}

void print(struct node *head, int val) {
	int i;
	struct node *current = head;
	for (i = 0; i < val; i++) {
		printf("%d ", *current);
		current = current->next;
	}
}
