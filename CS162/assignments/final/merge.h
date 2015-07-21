#ifndef MergeSort_h
#define MergeSort_h
#include <stdio.h>

struct node {
    int info;
    struct node *next;
};

void divideList(struct node *,struct node **);
struct node * mergeList(struct node *,struct node *);
void recMergeSort(struct node **);
void mergeSort(struct node **, struct node **);
void insertNodes(struct node **, int);
void printList(struct node *, int);
int lengthList(struct node *len);

#endif