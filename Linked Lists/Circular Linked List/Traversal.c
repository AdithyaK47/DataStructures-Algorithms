#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
}*head;

void print();

/* Function to traverse a given Circular linked list and print nodes */
void print(struct Node *head) 
{ 
	struct Node *temp = head; 

	// If linked list is not empty 
	if (head != NULL) 
	{ 
		// Keep printing nodes till we reach the first node again 
		do
		{ 
			printf("%d ", temp->data); 
			temp = temp->next; 
		} 
		while (temp != head); 
	} 
} 
