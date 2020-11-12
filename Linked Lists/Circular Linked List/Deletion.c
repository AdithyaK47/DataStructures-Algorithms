#include<stdio.h>
#include <stdlib.h>

void DeletionatBeginning();
void DeletionatEnd();
void DeletionatPos();

struct Node
{
   int data;
   struct Node *next;
}*head;



void DeletionatBeginning()
{
   if(head == NULL)
      printf("List is Empty!!! Deletion not possible!!!");
   else
   {
      struct Node *temp = head;
      if(temp -> next == head)
      {
         head = NULL;
         free(temp);
      }
      else{
         head = head -> next;
         free(temp);
      }
   }
}

void DeletionatEnd()
{
   if(head == NULL)
      printf("List is Empty!!! Deletion not possible!!!");
   else
   {
      struct Node *current = head, *prev;
      if(current -> next == head)
      {
         head = NULL;
         free(current);
      }
      else{
         while(current -> next != head){
            prev = current;
            current = current -> next;
         }
         prev -> next = head;
         free(current);
      }
   }
}

void DeletionatPos(int pos)
{
  struct Node *temp = head,*prev_node;
  int count = 0;
  while(temp -> next != head && pos != count){
    prev_node = temp;  // Tracking the (position - 1 )node
    temp = temp -> next; 
    count += 1;
  }
  if(pos == count){
    prev_node -> next = temp -> next;  // Assigning the address of the node to be deleted to its previous node
    free(temp); // Delete the node
  }
}
