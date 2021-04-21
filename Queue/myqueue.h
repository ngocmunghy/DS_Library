#ifndef _MYQUEUE_H
#define _MYQUEUE_H

typedef struct node {
	int key;
	struct node *next;
} node;

typedef struct queue {
	node *front, *rear;
} queue;

queue* initQueue();
int isEmptyQueue(queue *q);
node* createNode(int key);
void enQueue(queue *q, int key);
void deQueue(queue *q);
void printQueue(queue *q);

#endif