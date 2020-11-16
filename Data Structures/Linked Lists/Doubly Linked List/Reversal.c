#include<stdio.h>
#include<stdlib.h>

struct Node  {
	int data;
	struct Node* next;
	struct Node* prev;
} *head, *tail;

void Reversal(){
  struct Node *current, *nextNode;
  current = head;
  while (current != NULL){
    nextNode = current->next;
    current->next = current->prev;
    current->prev = nextNode;
    current = nextNode;
  }
  current = head;
  head = tail;
  tail = current;
}
