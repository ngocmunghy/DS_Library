#include <stdio.h>
#include <stdlib.h>
#include "mystack.h"

int main() {

	Stack *stack = initStack();

	push(stack, 1);
	push(stack, 2);
	push(stack, 3);
	push(stack, 4);

	printStack(stack);

	pop(stack);
	printStack(stack);
	pop(stack);
	printStack(stack);
	pop(stack);
	printStack(stack);
	pop(stack);
	printStack(stack);

	return 0;
}
