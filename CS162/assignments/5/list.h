#ifndef LIST_H
#define LIST_H

struct node {
	int val;
	struct node *next;
	struct node *tail;
};

int length(struct node *);
void print(struct node *, int);
struct node *push(struct node *, int);
struct node *append(struct node *, struct node *, int);

struct node *clearList(struct node *);
struct node *removeNode(struct node *, int);
struct node *sort_ascending(struct node *);
struct node *sort_descending(struct node *);
//insert into a specific location in the list
struct node *insert_middle(struct node *, int, int);


#endif