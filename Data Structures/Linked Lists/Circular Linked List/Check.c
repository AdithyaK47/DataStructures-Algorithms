#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//node structure
struct Node{
int data;
struct Node* next;
};

//function to find the circular linked list.
bool isCircular(struct Node *head){
 struct Node *temp = head;
 while(temp!=NULL)
 { //if temp points to head then it has completed a circle,thus a circular linked list.
    if(temp->next == head)
        return true;
    temp=temp->next;
 }
 return false;
}
