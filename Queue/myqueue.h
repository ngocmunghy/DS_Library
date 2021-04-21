#ifndef _MYQUEUE_H
#define _MYQUEUE_H

typedef struct node {
	int key;
	struct node *next;
} node;

typedef struct Queue {
	node *front, *rear;
} Queue;

Queue* initQueue();
int isEmptyQueue(Queue *q);
node* createNode(int key);
void enQueue(Queue *q, int key);
void deQueue(Queue *q);
void printQueue(Queue *q);

#endif