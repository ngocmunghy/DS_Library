#ifndef _MYSTACK_H
#define _MYSTACK_H

struct StackNode {
	int key;
	struct StackNode *next;
};

typedef struct StackNode node;

int isEmptyStack(node* top);
node* createNode(int key);
void push(node** top, int x);
void pop(node** top);
int peek(node* top); // return key in the top of stack
void printStack(node* top);

#endif