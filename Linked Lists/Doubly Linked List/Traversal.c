#include<stdio.h>
#include<stdlib.h>

struct Node  {
	int data;
	struct Node* next;
	struct Node* prev;
};

void traversal(struct Node* head) 
{ 
  struct Node *ptr = head;
	while (ptr != NULL) { 
		printf(" %d ", ptr->data); 
		ptr = ptr->next; 
	} 
} 
