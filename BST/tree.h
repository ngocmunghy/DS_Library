#ifndef _TREE_H
#define _TREE_H

typedef struct Node {
	int data;
	struct *left, *right; 
} Node;

typedef Node Tree;

Tree* createTree();
Node* createNode(int value);
void addNode(Tree *root, Node *node);
void removeNode(Tree *root, int x);
Node* findNode(Tree root, int x);
void printTree(Tree root);	// default prefix traversal
void destroyTree(Tree *root);

#endif