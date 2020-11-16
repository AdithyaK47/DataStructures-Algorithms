#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;
} *front, *rear;

void Enqueue(int data){
  struct Node *newNode;
  newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;

  if(rear == NULL){
    front = rear = newNode;
    rear->next = front;
  }
  else{
    rear->next = newNode;
    rear = newNode;
    newNode->next = front;
  }
}

void Dequeue(){
  struct Node *temp = front;

  if(front == NULL && rear == NULL){
    printf("Empty Queue");
  }
  else if(front == rear){
    front = rear = NULL;
    free(temp);
  }
  else{
    front = front->next;
    rear->next = front;
    free(temp);
  }
}

void Print(){
  struct Node *temp = front;

  if(front == NULL && rear == NULL){
    printf("Empty queue");
  }
  else{
    do{
      printf("%d\n", temp->data);
      temp = temp->next;
    }while(temp != front);
  }
}
