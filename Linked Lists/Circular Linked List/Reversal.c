#include<stdio.h>
#include <stdlib.h>

void DeletionatBeginning();
void DeletionatEnd();


struct Node
{
   int data;
   struct Node *link;
}*head;

struct Node *prev, *current, *next;


void reverse(struct Node* head) 
{ 
    // if list is empty 
    if (head == NULL) 
        return; 
  
    // reverse procedure same as reversing a 
    // singly linked list 
    prev = NULL; 
    current = head; 
    do { 
        next = current->link; 
        current->link = prev; 
        prev = current; 
        current = next; 
    } while (current != head); 
  
    // adjutsing the links so as to make the 
    // last node point to the first node 
    head->link = prev; 
    head = prev; 
} 
