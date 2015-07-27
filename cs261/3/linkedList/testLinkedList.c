#include "linkedList.h"
#include <stdio.h>
#include <stdlib.h>

#define GREEN "\E[32m"
#define YELLOW "\E[33m"
#define BLUE "\E[36m"
#define RED "\E[31m"
#define CLEAR "\E[0m"

void assertTrue(int predicate, char *message)
{
	printf("%s: ", message);
	if (predicate)
		printf("%sPASSED%s\n", GREEN, CLEAR);
	else
		printf("%sFAILED%s\n", RED, CLEAR);
}

int main(int argc, char* argv[]) {
        

	/* Test your linked list in here! */
	struct linkedList *b = NULL;


printf("%s\nTesting List Lifecycle...%s\n\n", YELLOW, CLEAR);

	printf("%sCreating List...%s\n", BLUE, CLEAR);
	b = createLinkedList();
	assertTrue(b != NULL, "Test List was created");
	assertTrue(isEmptyList(b), "Test List is empty");

	printf("%sDeleting List...%s\n", BLUE, CLEAR);
	deleteLinkedList(b);
	b = NULL;
	assertTrue(b == NULL, "Test List no longer exists");


printf("%s\nTesting Bag Interface...%s\n\n", YELLOW, CLEAR);
b = createLinkedList();

	printf("%sAdding item to Bag...%s\n", BLUE, CLEAR);
	addList(b, (TYPE)5);
	assertTrue(!isEmptyList(b), "Test Bag is not empty");
	assertTrue(containsList(b, (TYPE)5), "Test item was added to Bag");

	printf("%sRemoving item from Bag...%s\n", BLUE, CLEAR);
	removeList(b, (TYPE)5);
	assertTrue(isEmptyList(b), "Test Bag is now empty");

	printf("%sAdding items to Bag...%s\n", BLUE, CLEAR);
	addList(b, (TYPE)7);
	addList(b, (TYPE)5);
	addList(b, (TYPE)4);
	addList(b, (TYPE)8);
	printf("Bag contents: [8,4,5,7]\n");
	assertTrue(containsList(b, (TYPE)4), "Test Bag contains 4");
	assertTrue(containsList(b, (TYPE)5), "Test Bag contains 5");
	assertTrue(containsList(b, (TYPE)8), "Test Bag contains 8");
	assertTrue(containsList(b, (TYPE)7), "Test Bag contains 7");

	printf("%sRemoving 4 from Bag...%s\n", BLUE, CLEAR);
	removeList(b, (TYPE)4);
	assertTrue(!containsList(b, (TYPE)4), "Test Bag no longer contains 4");


printf("%s\nTesting Deque Interface...\n%s\n", YELLOW, CLEAR);

	printf("%sAdding 6 to Front of Deque...%s\n", BLUE, CLEAR);
	addFrontList(b, (TYPE)6);
	printf("Deque contents: [6,8,5,7]\n");
	assertTrue(frontList(b) == (TYPE)6, "Test Deque front is 6");
	assertTrue(backList(b) == (TYPE)7, "Test Deque back is 7");

	printf("%sAdding 3 to Back of Deque...%s\n", BLUE, CLEAR);
	addBackList(b, (TYPE)3);
	printf("Deque contents: [6,8,5,7,3]\n");
	assertTrue(frontList(b) == (TYPE)6, "Test Deque front is 6");
	assertTrue(backList(b) == (TYPE)3, "Test Deque back is 3");

	printf("%sRemoving item from front of Deque...%s\n", BLUE, CLEAR);
	removeFrontList(b);
	printf("Deque contents: [8,5,7,3]\n");
	assertTrue(frontList(b) == (TYPE)8, "Test Deque front is 8");
	assertTrue(backList(b) == (TYPE)3, "Test Deque back is 3");

	printf("%sRemoving item from back of Deque...%s\n", BLUE, CLEAR);
	removeBackList(b);
	printf("Deque contents: [8,5,7]\n");
	assertTrue(frontList(b) == (TYPE)8, "Test Deque front is 8");
	assertTrue(backList(b) == (TYPE)7, "Test Deque back is 7");

	printf("%sTesting add on empty Deque...%s\n", BLUE, CLEAR);
	struct linkedList *one = createLinkedList();
	struct linkedList *two = createLinkedList();
	addFrontList(one, 1);
	addBackList(two, 2);
	assertTrue(frontList(one) == 1 && backList(one) == 1, "Test addFrontList works on empty Deque");
	assertTrue(frontList(two) == 2 && backList(two) == 2, "Test addBackList works on empty Deque");

	printf("%sTesting add on Deque with one element...%s\n", BLUE, CLEAR);
	struct linkedList *three = createLinkedList();
	struct linkedList *four = createLinkedList();
	addList(three, 1);
	addList(four, 1);
	addFrontList(three, 3);
	addBackList(four, 4);
	assertTrue(frontList(three) == 3 && backList(three) != 3, "Test addFrontList works on Deque with one element");
	assertTrue(frontList(four) != 4 && backList(four) == 4, "Test addBackList works on Deque with one element");


printf("%s\nHello from test code!%s\n", GREEN, CLEAR);
	deleteLinkedList(b);
	b = NULL;

	return 0;
}


