#include <stdio.h>
#include <stdlib.h>

//structure of Node with prev and next pointers
struct node {
int data;
struct node * prev;
struct node * next;
}*head, *last;



void insertAtBeginning(int data)
{
  struct node * newNode;
  if(head == NULL)
  {printf("Error, List is Empty!\n");
  }
  else{
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = head; // Point to next node which is currently head
    newNode->prev = NULL; // Previous node of first node is NULL
   /* Link previous address field of head with newNode */
    head->prev = newNode;
   /* Make the new node as head node */
    head = newNode;
  }
}


void insertatEnd(int data) {
	struct node* temp = head;
	struct node* newNode = (struct node *)malloc(sizeof(struct node));
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp->next != NULL){
    temp = temp->next; 
  }// Go To last Node
	temp->next = newNode;
	newNode->prev = temp;
  newNode->data = data;
}

void insertatPos(int data, int position) {
    struct node* newNode = malloc(sizeof(struct node));
    // Not at beginning
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    struct node* previousNode = head;
    for (int i = 0; i < position - 2; i++) {
        previousNode = previousNode->next;
    }

    newNode->next = previousNode->next;
    newNode->prev = previousNode;
    previousNode->next = newNode;
    newNode->next->prev = newNode;
}

