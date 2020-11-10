// Iterative C program to reverse a linked list
#include <stdio.h>
#include <stdlib.h>

// Link list node 
struct Node {
	int data;
	struct Node* link;
}*head;

// Function to reverse the linked list (Iterative approach)
void ReverseIterative(struct Node* head)
{
	struct Node* prev = NULL;
	struct Node* current = head;
	struct Node* next = NULL;
	while (current != NULL) {
		// Store next
		next = current->link;
		// Reverse current node's pointer
		current->link = prev;
		// Move pointers one position ahead.
		prev = current;
		current = next;
	}
	head = prev;
}

// Function to reverse the linked list (Recursive approach)
void ReverseRecursion(struct Node* ptr){
  if(ptr->link == NULL){
    head = ptr;
    return;
  }
  ReverseRecursion(ptr->link);
  struct Node* q = ptr->link;
  q->link = ptr;
  ptr->link = NULL;
}
//If used head variable is not global, this function will have to return the address of the new head.
