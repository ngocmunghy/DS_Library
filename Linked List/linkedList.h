#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

struct listNode {
	int key;
	struct listNode *next;
};

typedef struct listNode node;

node* createNode(int key);
void insertToHead(node** head, int key);
void insertToTail(node* head, int key);
node* findByKey(node* head, int key);
void removeHead(node** head);
void removeTail(node* head);
void removeNodeByKey(node* head, int key); // remove the node whose firstly has the equal key!
void printList(node* head);
int isEmpty(node* head);
int lengthOfList(node* head);
void freeList(node* head);

#endif