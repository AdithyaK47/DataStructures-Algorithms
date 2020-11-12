#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{
  int data;                        
  struct Node *next;           
}* top;

void Push(int num)
{
  struct Node *newNode;
  newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = num; 
  newNode->next = top; 
  top = newNode; 
}

void Pop(){
  struct Node *temp;
  temp = top;
  top = top->next;
  free(temp);
}

int Top(){
  return top->data;
}

bool IsEmpty(){
  if(top == NULL){
    return true;
  }
  else{
    return false;
  }
}

void Print(){
  struct Node *temp;
  temp = top;
  while(temp != NULL){
    printf("%d\n",temp->data);
    temp = temp->next;
  }
}
