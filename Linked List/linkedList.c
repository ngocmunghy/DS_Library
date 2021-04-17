#include<stdio.h>
#include<stdlib.h>
#include "linkedList.h"

int isEmpty(node* head) {
	return !head;
}

node* createNode(int key) {
	node* tmp = (node*)malloc(sizeof(node));
	tmp->key = key;
	tmp->next = NULL;
	return tmp;
}

node* insertToHead(node* head, int key) {
	if (isEmpty(head)) {
		node* tmp = createNode(key);
		head = tmp;
		return tmp;
	}

	node* tmp = createNode(key);
	tmp->next = head;
	head = tmp;
	return tmp;
}

void insertToTail(node* head, int key) {
	if (isEmpty(head)) {
		node* tmp = createNode(key);
		head = tmp;
		return;
	}

	node* tmp = createNode(key);
	node* ptr = head;

	while (ptr->next != NULL) {
		ptr = ptr->next;
	}

	ptr->next = tmp;
}

node* findByKey(node* head, int key) {
	if (isEmpty(head)) {
		printf("Empty list!\n");
		return NULL;
	}

	node* ptr = head;

	// find node whose node->key == key
	while (ptr != NULL) {
		if (ptr->key == key) break;
		ptr = ptr->next;
	}
	if (ptr) {
		printf("Found node whose key = %d in the list!\n", key);
	} else {
		printf("Not found node whose key = %d in the list!\n", key);
	}
	return ptr;
}

node* removeHead(node* head) {
	if (isEmpty(head)) {
		printf("The list is empty!\n");
	} else {
		node* ptr = head;
		head = head->next;
		free(ptr);
		printf("Remove head node sucessfully\n");
		return head;
	}
}

void removeTail(node* head) {
	if (isEmpty(head)) {
		printf("The list is empty!\n");
	} else {
		node* prevPtr = head;
		node* ptr = prevPtr->next;
		while (ptr->next != NULL) {
			ptr = ptr->next;
			prevPtr = prevPtr->next;
		}
		prevPtr->next = ptr->next;
		free(ptr);
		printf("Remove tail node sucessfully\n");

	}
}

void removeNodeByKey(node* head, int key) {

	if (head->key == key) { // check if node need to delete is head
		node* ptr = head;
		head = head->next;
		free(ptr);
	} else {
		node* prevPtr = head;
		node* ptr = prevPtr->next;
		while (ptr != NULL) {
			if (ptr->key == key) {
				prevPtr->next = ptr->next;
				free(ptr);
				printf("Remove node whose key = %d sucessfully!\n", key);
				return;
			} else {
				prevPtr = prevPtr->next;
				ptr = ptr->next;
			}
		}

		if (ptr == NULL) {
			printf("Not found node whose key = %d in the list! Nothing to update!\n", key);
		}
	}
}

void printList(node* head) {
	node* ptr = head;
	while (ptr->next != NULL) {
		printf("%d -> ", ptr->key);
		ptr = ptr->next;
	}
	printf("%d \n", ptr->key);
}

int lengthOfList(node* head) {
	node* ptr = head;
	int length = 0;
	while (ptr != NULL) {
		length++;
		ptr = ptr->next;
	}
	return length;
}