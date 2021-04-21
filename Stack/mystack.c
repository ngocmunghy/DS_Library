#include <stdio.h>	
#include <stdlib.h>
#include "mystack.h"

int isEmptyStack(node* top) {
	return !top;
}

node* createNode(int key) {
	node* tmp = (node*)malloc(sizeof(node));
	tmp->key = key;
	tmp->next = NULL;
	return tmp;
}

void push(node** top, int x) {
	node* tmp = createNode(x);
	tmp->next = *top;
	*top = tmp;
}

void pop(node** top) {
	if(isEmptyStack(*top)) {
		printf("Empty Stack! Nothing to pop!\n");
		return;
	}
	node* ptr = *top;
	*top = ptr->next;
	free(ptr);
}

int peak(node* top) {
	return top->key;
}

void printStack(node* top) {
	if(isEmptyStack(top)) {
		printf("Empty Stack! Nothing to show!\n");
		return;
	}

	node* ptr = top;
	while(ptr->next != NULL) {
		printf("%d -> ", ptr->key);
		ptr = ptr->next;
	}
	printf("%d \n", ptr->key);
}