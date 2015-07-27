#include "cirListDeque.h"
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
	struct cirListDeque *b = NULL;

printf("%s\nTesting Deque Interface...\n%s\n", YELLOW, CLEAR);
b = createCirListDeque();
    addFrontCirListDeque(b, (TYPE)7);
    addFrontCirListDeque(b, (TYPE)5);
    addFrontCirListDeque(b, (TYPE)8);
	printf("%sAdding 6 to Front of Deque...%s\n", BLUE, CLEAR);
	addFrontCirListDeque(b, (TYPE)6);
	printf("Deque contents: [6,8,5,7]\n");
	assertTrue(frontCirListDeque(b) == (TYPE)6, "Test Deque front is 6");
	assertTrue(backCirListDeque(b) == (TYPE)7, "Test Deque back is 7");

	printf("%sAdding 3 to Back of Deque...%s\n", BLUE, CLEAR);
	addBackCirListDeque(b, (TYPE)3);
	printf("Deque contents: [6,8,5,7,3]\n");
	assertTrue(frontCirListDeque(b) == (TYPE)6, "Test Deque front is 6");
	assertTrue(backCirListDeque(b) == (TYPE)3, "Test Deque back is 3");

	printf("%sRemoving item from front of Deque...%s\n", BLUE, CLEAR);
	removeFrontCirListDeque(b);
	printf("Deque contents: [8,5,7,3]\n");
	assertTrue(frontCirListDeque(b) == (TYPE)8, "Test Deque front is 8");
	assertTrue(backCirListDeque(b) == (TYPE)3, "Test Deque back is 3");

	printf("%sRemoving item from back of Deque...%s\n", BLUE, CLEAR);
	removeBackCirListDeque(b);
	printf("Deque contents: [8,5,7]\n");
	assertTrue(frontCirListDeque(b) == (TYPE)8, "Test Deque front is 8");
	assertTrue(backCirListDeque(b) == (TYPE)7, "Test Deque back is 7");

	printf("%sTesting add on empty Deque...%s\n", BLUE, CLEAR);
	struct cirListDeque *one = createCirListDeque();
	struct cirListDeque *two = createCirListDeque();
	addFrontCirListDeque(one, 1);
	addBackCirListDeque(two, 2);
	assertTrue(frontCirListDeque(one) == 1 && backCirListDeque(one) == 1, "Test addFrontList works on empty Deque");
	assertTrue(frontCirListDeque(two) == 2 && backCirListDeque(two) == 2, "Test addBackList works on empty Deque");

	printf("%sTesting add on Deque with one element...%s\n", BLUE, CLEAR);
	struct cirListDeque *three = createCirListDeque();
	struct cirListDeque *four = createCirListDeque();
	addFrontCirListDeque(three, 1);
	addFrontCirListDeque(four, 1);
	addFrontCirListDeque(three, 3);
	addBackCirListDeque(four, 4);
	assertTrue(frontCirListDeque(three) == 3 && backCirListDeque(three) != 3, "Test addFrontList works on Deque with one element");
	assertTrue(frontCirListDeque(four) != 4 && backCirListDeque(four) == 4, "Test addBackList works on Deque with one element");


printf("%s\nHello from test code!%s\n", GREEN, CLEAR);
	deleteCirListDeque(b);
	//b = NULL;

	return 0;
}


