#include<stdio.h>
#define MAX_SIZE 10

int cQueue[MAX_SIZE];
int front = -1, rear = -1;

void Enqueue(int data){
  if(front == -1 && rear == -1){
    front = rear = 0;
    cQueue[rear] = data;
  }
  else if((rear + 1)%MAX_SIZE == front){
    printf("Queue is full.");
  }
  else{
    rear = (rear + 1)%MAX_SIZE;
    cQueue[rear] = data;
  }
}

void Dequeue(){
  if(front == -1 && rear == -1){
    printf("Queue is empty.");
  }
  else if (front == rear){
    front = rear = -1;
  }
  else{
    front = (front + 1)%MAX_SIZE;
  }
}

void Print(){
  int i = front;
  if (front == -1 && rear == -1){
    printf("Queue is empty.");
  }
  else{
    printf("The queue is:\n");
    while(i != rear){
      printf("%d\n",cQueue[i]);
      i = (i + 1)%MAX_SIZE;
    }
    printf("%d",cQueue[i]);
  }
}
