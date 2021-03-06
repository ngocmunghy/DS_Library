#include<stdio.h>
#include<stdlib.h>
#include"myqueue.h"

Queue* initQueue() {
	Queue* q = (Queue*)malloc(sizeof(Queue));
	q->rear = q->front = NULL;
	return q;
}

int isEmptyQueue(Queue *q) {
	return q->front == NULL;
}

node* createNode(int key) {
	node* tmp = (node*)malloc(sizeof(node));
	tmp->key = key;
	tmp->next = NULL;
	return tmp;
}

void enQueue(Queue *q, int key) {
	node* tmp = createNode(key);
	if (isEmptyQueue(q)) {
		q->front = q->rear = tmp;
	} else {
		q->rear->next = tmp;
		q->rear = tmp;
	}
}

void deQueue(Queue *q) {
	if (isEmptyQueue(q)) {
		return;
	}
	node* tmp = q->front;
	q->front = tmp->next;
	free(tmp);
}

void printQueue(Queue *q) {
	if (isEmptyQueue(q)) {
		printf("Queue is empty!\n");
		return;
	}
	node* tmp = q->front;
	while (tmp->next != NULL) {
		printf("%d -> ", tmp->key);
		tmp = tmp->next;
	}
	printf("%d \n", tmp->key);
}