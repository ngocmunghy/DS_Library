#include <stdio.h>	
#include <stdlib.h>
#include "mystack.h"

Stack* initStack() {
	Stack* stack = (Stack*)malloc(sizeof(Stack));
	stack->top = NULL;
	return stack;
}

int isEmptyStack(Stack* stack) {
	return stack->top == NULL;
}

node* createNode(int key) {
	node* tmp = (node*)malloc(sizeof(node));
	tmp->key = key;
	tmp->next = NULL;
	return tmp;
}

void push(Stack* stack, int x) {
	node* tmp = createNode(x);
	if(isEmptyStack(stack)) {
		stack->top = tmp;
		return;
	}

	tmp->next = stack->top;
	stack->top = tmp;
}

void pop(Stack* stack) {
	if(isEmptyStack(stack)) {
		printf("Empty Stack! Nothing to pop!\n");
		return;
	}
	node* ptr = stack->top;
	stack->top = ptr->next;
	free(ptr);
}

int peak(Stack* stack) {
	return stack->top->key;
}

void printStack(Stack* stack) {
	if(isEmptyStack(stack)) {
		printf("Empty Stack!\n");
		return;
	}

	node* ptr = stack->top;
	while(ptr->next != NULL) {
		printf("%d -> ", ptr->key);
		ptr = ptr->next;
	}
	printf("%d \n", ptr->key);
}