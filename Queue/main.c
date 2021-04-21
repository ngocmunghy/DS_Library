#include <stdio.h>
#include <stdlib.h>
#include "myqueue.h"

int main() {

	queue *q = initQueue();
	printf("%d\n", isEmptyQueue(q));

	enQueue(q, 1);
	enQueue(q, 2);
	enQueue(q, 3);
	printQueue(q);

	deQueue(q);
	// deQueue(q);
	// deQueue(q);
	printQueue(q);
	printf("%d\n", isEmptyQueue(q));

	return 0;
}