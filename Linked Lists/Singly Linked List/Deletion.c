#include <stdio.h>
#include <stdlib.h>

// Creating node with data and a pointer
struct node {
 int data;
 struct node *next;
}*head;


void DeletionatBeginning()
{ 
 if(head == NULL){
   printf("\n The list is Empty\n"); 
 }
 else{
   struct node *temp;
   temp = head; //Make temp as head node
   head = head -> next;
   free(temp); // Delete the temporary node
 }
}

void DeletionatEnd()
{
  if(head -> next == NULL){
    free(head); //Delete head
    head = NULL; // make the reference to NULL
  }
  else{
    struct node *prev_node, *temp = head;
    while(temp -> next != NULL){
      prev_node = temp;
      temp = temp -> next; //Traverse to to the last node
    }
    free(temp); //Delete the last node
    prev_node -> next = NULL;
  }
}

void DeletionatPos(int pos)
{
  struct node *temp = head,*prev_node;
  int count = 0;
  while(temp -> next != NULL && pos != count){
    prev_node = temp;  // Tracking the (position - 1 )node
    temp = temp -> next; 
    count += 1;
  }
  if(pos == count){
    prev_node -> next = temp -> next;  // Assigning the address of the node to be deleted to its previous node
    free(temp); // Delete the node
  }
}
