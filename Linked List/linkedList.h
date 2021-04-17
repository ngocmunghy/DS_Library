#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

struct listNode {
	int key;
	struct listNode *next;
};

typedef struct listNode ListNode;
typedef ListNode node;

node* createNode(int key);
node* insertToHead(node* head, int key);
void insertToTail(node* head, int key);
node* findByKey(node* head, int key);
node* removeHead(node* head);
void removeTail(node* head);
void removeNodeByKey(node* head, int key); 
void printList(node* head);
int isEmpty(node* head);
int lengthOfList(node* head);
void freeList(node* head);

#endif