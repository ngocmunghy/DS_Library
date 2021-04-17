#include<stdio.h>
#include<stdlib.h>
#include "linkedList.h"

node* head = NULL;

int main() {

	head = createNode(1);
	insertToTail(head, 2);
	insertToTail(head, 3);
	insertToTail(head, 4);
	// insertToTail(head, 5);
	printList(head);

	// head = insertToHead(head, 2);
	// head = insertToHead(head, 3);
	// head = insertToHead(head, 4);
	// head = insertToHead(head, 5);

	head = removeHead(head);
	printList(head);

	removeTail(head);
	printList(head);
	
	node* tmp = findByKey(head, 3);
	tmp = findByKey(head, 7);
	printf("Length of the list: %d\n", lengthOfList(head));
	removeNodeByKey(head, 10);
	removeNodeByKey(head, 3);
	printf("Length of the list: %d\n", lengthOfList(head));
	printList(head);

	freeList(head);

	return 0;
}