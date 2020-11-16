#include <stdio.h>
#include <stdlib.h>

//structure of Node with prev and next pointers
struct node {
int data;
struct node * prev;
struct node * next;
}*head, *tail;


void DeletionatBeginning()
{
  struct node * temp;
  temp = head;
  head = head -> next;  // Shift head node
  head->prev = NULL;  // The prev pointer of the head node is NULL
  free(temp);          // Delete the first node
}

void DeletionatEnd()
{
  struct node * temp;
  temp = tail;
  tail = tail->prev; // Move last pointer to 2nd last node
  tail->next = NULL; // The next pointer of the last node is NULL
  free(temp); // Delete the last node
}

void DeletionatPos(int pos)
{
  struct node *temp;
  int i = 1;
  temp = head;
  while(i < pos){
    temp = temp->next;
    i++;
  }
  temp->prev->next = temp->next;
  temp->next->prev = temp->prev;
  free(temp);
}

