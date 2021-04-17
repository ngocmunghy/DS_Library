#include <stdio.h>
#include <stdlib.h>
#include "mystack.h"

int main() {
	node* top = NULL;
	push(&top, 1);
	push(&top, 2);
	push(&top, 3);
	push(&top, 4);
	pop(&top);
	int val = peek(top);
	printf("%d\n", val);
	printStack(top);

	return 0;
}
