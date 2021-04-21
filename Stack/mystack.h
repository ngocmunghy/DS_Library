#ifndef _MYSTACK_H
#define _MYSTACK_H

typedef struct node {
	int key;
	struct node *next;
} node;

typedef struct Stack {
	node *top;
} Stack;

Stack* initStack();
int isEmptyStack(Stack* stack);
node* createNode(int key);
void push(Stack* stack, int x);
void pop(Stack* stack);
int peak(Stack* stack); // return key in the top of stack
void printStack(Stack* stack);

#endif