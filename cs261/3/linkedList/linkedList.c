#include "linkedList.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>


/* Double Link*/
struct DLink {
	TYPE value;
	struct DLink * next;
	struct DLink * prev;
};

/* Double Linked List with Head and Tail Sentinels  */

struct linkedList{
	int size;
	struct DLink *firstLink;
	struct DLink *lastLink;
};

/* Function to print list
 Pre: lst is not null
 */
void _printList(struct linkedList* lst)
{
	/* FIXME: you must write this */
	// Assert preconditions
	assert(lst != NULL);
	// Print size and start bracket
	printf("\E[30;47m[");
	// Loop through and print each value
	struct DLink *curr = lst->firstLink->next;
	for (int i = 0; i < lst->size-1; ++i)
	{
		printf("%d, ", curr->value);
		curr = curr->next;
	}
	// Close the bracket
	printf("%d]\E[0m\n", curr->value);

}

/*
	initList
	param lst the linkedList
	pre: lst is not null
	post: lst size is 0
*/

void _initList (struct linkedList *lst) {
	/* FIXME: you must write this */
	//Assert preconditions
	assert(lst != NULL);
	// Allocate memory for sentinels
	lst->firstLink = malloc(sizeof(struct DLink*));
	lst->lastLink = malloc(sizeof(struct Dlink*));
	// Set up links for empty list
	lst->firstLink->next = lst->lastLink;
	lst->firstLink->prev = NULL;
	lst->lastLink->next = NULL;
	lst->lastLink->prev = lst->firstLink;
	// Set size to zero
	lst->size = 0;
}

/*
 createList
 param: none
 pre: none
 post: firstLink and lastLink reference sentinels
 */

struct linkedList *createLinkedList()
{
	struct linkedList *newList = malloc(sizeof(struct linkedList));
	_initList(newList);
	return(newList);
}

/*
	_addLinkBefore
	param: lst the linkedList
	param: l the  link to add before
	param: v the value to add
	pre: lst is not null
	pre: l is not null
	post: lst is not empty
*/

/* Adds Before the provided link, l */

void _addLinkBefore(struct linkedList *lst, struct DLink *l, TYPE v)
{
	/* FIXME: you must write this */
	// Assert preconditions
	assert(lst != NULL);
	assert(l != NULL);
	// Create a new node
	struct DLink *newLink = malloc(sizeof(struct DLink));
	newLink->value = v;
	// Iterate through to l
	struct DLink *curr = lst->firstLink->next;
	while (curr != l && curr != lst->lastLink)
	{
		curr = curr->next;
	}
	// set newLink's links
	newLink->next = curr;
	newLink->prev = curr->prev;
	// adjust previous links
	curr->prev->next = newLink;
	curr->prev = newLink;
	// Increment the size
	lst->size++;
}

/*
	_removeLink
	param: lst the linkedList
	param: l the linke to be removed
	pre: lst is not null
	pre: l is not null
	post: lst size is reduced by 1
*/
void _removeLink(struct linkedList *lst, struct DLink *l)
{
	// TODO: may not work if empty list
	/* FIXME: you must write this */
	// Assert preconditions
	assert(lst != NULL);
	assert(l != NULL);
	// Iterate through to l
	struct DLink *curr = lst->firstLink;
	while (curr != l && curr->next != lst->lastLink)
	{
		curr = curr->next;
	}
	// Adjust new links
	curr->prev->next = curr->next;
	curr->next->prev = curr->prev;
	// Remove the node
	free(curr);
	// Decrement the size
	lst->size--;
}

/*
	isEmptyList
	param: lst the linkedList
	pre: lst is not null
	post: none
*/
int isEmptyList(struct linkedList *lst) {
 	/* FIXME: you must write this */
 	// Assert preconditions
 	assert(lst != NULL);
 	// Checks if the firstLink points to the lastLink
	return lst->firstLink->next == lst->lastLink;
}

/* De-allocate all links of the list

	param: 	lst		pointer to the linked list
	pre:	none
	post:	All links (including the two sentinels) are de-allocated
*/
void freeLinkedList(struct linkedList *lst)
{
	while(!isEmptyList(lst)) {
		/* remove the link right after the first sentinel */
		_removeLink(lst, lst->firstLink->next);
	}		
	/* remove the first and last sentinels */
	free(lst->firstLink);
	free(lst->lastLink);	
}

/* 	Deallocate all the links and the linked list itself. 

	param: 	v		pointer to the dynamic array
	pre:	v is not null
	post:	the memory used by v->data is freed
*/
void deleteLinkedList(struct linkedList *lst)
{
	assert (lst != 0);
	freeLinkedList(lst);
	free(lst);
}


/* ************************************************************************
	Deque Interface Functions
************************************************************************ */

/*
	addFrontList
	param: lst the linkedList
	param: e the element to be added
	pre: lst is not null
	post: lst is not empty, increased size by 1
*/
void addFrontList(struct linkedList *lst, TYPE e)
{
	/* FIXME: you must write this */
	// Assert preconditions
	assert(lst != NULL);
	// Add link before firstlink->next
	_addLinkBefore(lst, lst->firstLink->next, e);
}

/*
	addBackList
	param: lst the linkedList
	param: e the element to be added
	pre: lst is not null
	post: lst is not empty, increased size by 1
*/
void addBackList(struct linkedList *lst, TYPE e)
{
	/* FIXME: you must write this */
	// Assert preconditions
	assert(lst != NULL);
	// Add link before lastLink sentinel
	_addLinkBefore(lst, lst->lastLink, e);
}

/*
	frontList
	param: lst the linkedList
	pre: lst is not null
	pre: lst is not empty
	post: none
*/
TYPE frontList (struct linkedList *lst)
{
	/* FIXME: you must write this */
	// Assert preconditions
	assert(lst != NULL);
	assert(!isEmptyList(lst));
	// Return the value after the firstLink sentinel
	return lst->firstLink->next->value;
}

/*
	backList
	param: lst the linkedList
	pre: lst is not null
	pre: lst is not empty
	post: lst is not empty
*/
TYPE backList(struct linkedList *lst)
{
	/* FIXME: you must write this */
	// Assert preconditions
	assert(lst != NULL);
	assert(!isEmptyList(lst));
	// Return the value before the lastLink sentinel
	return lst->lastLink->prev->value;
}



/*
	removeFrontList
	param: lst the linkedList
	pre:lst is not null
	pre: lst is not empty
	post: size is reduced by 1
*/
void removeFrontList(struct linkedList *lst)
{
   	/* FIXME: you must write this */
	// Assert preconditions
	assert(lst != NULL);
	assert(!isEmptyList(lst));
	// Remove the link after firstLink sentinel
	_removeLink(lst,lst->firstLink->next);
}

/*
	removeBackList
	param: lst the linkedList
	pre: lst is not null
	pre:lst is not empty
	post: size reduced by 1
*/
void removeBackList(struct linkedList *lst)
{	
	/* FIXME: you must write this */
	// Assert preconditions
	assert(lst != NULL);
	assert(!isEmptyList(lst));
	// Remove the link before lastLink sentinel
	_removeLink(lst,lst->lastLink->prev);
}


/* ************************************************************************
	Stack Interface Functions
************************************************************************ */

/* 
	Add an item to the bag
	param: 	lst		pointer to the bag
	param: 	v		value to be added
	pre:	lst is not null
	post:	a link storing val is added to the bag
 */
void addList(struct linkedList *lst, TYPE v)
{
	/* FIXME: you must write this */
	// Assert preconditions
	assert(lst != NULL);
	// Add a new link before the lastLink sentinel
	_addLinkBefore(lst, lst->firstLink->next, v);
}

/*	Returns boolean (encoded as an int) demonstrating whether or not
	the specified value is in the collection
	true = 1
	false = 0

	param:	lst		pointer to the bag
	param:	e		the value to look for in the bag
	pre:	lst is not null
	pre:	lst is not empty
	post:	no changes to the bag
*/
int containsList (struct linkedList *lst, TYPE e)
{
	/* FIXME: you must write this */
	// Assert preconditions
	assert(lst != NULL);
	assert(!isEmptyList(lst));
	// Find first occurence of e
	struct DLink *curr = lst->firstLink->next;
	while (curr->value != e && curr->next != lst->lastLink)
	{
		curr = curr->next;
	}
	// Return whether e was found
	return curr->value == e;


}

/*	Removes the first occurrence of the specified value from the collection
	if it occurs

	param:	lst		pointer to the bag
	param:	e		the value to be removed from the bag
	pre:	lst is not null
	pre:	lst is not empty
	post:	e has been removed
	post:	size of the bag is reduced by 1
*/
void removeList (struct linkedList *lst, TYPE e)
{
	/* FIXME: you must write this */
	// Assert preconditions
	assert(lst != NULL);
	assert(!isEmptyList(lst));
	// Find first occurence of e
	struct DLink *curr = lst->firstLink->next;
	while (curr->value != e && curr->next != lst->lastLink)
	{
		curr = curr->next;
	}
	// Remove link that contains e
	if (curr->value == e)
	{
		_removeLink(lst, curr);
	}
}