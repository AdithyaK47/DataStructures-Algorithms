#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 7
 
int deque[MAX];
int front=-1;
int rear=-1;

bool IsEmpty();
bool IsFull();

void InsertatFront(int item){
  if(IsFull()){
    printf("\nQueue Overflow\n");
    return;
  }
  if(front == -1){
    front = rear = 0;
  }
  else if(front == 0){
    front = MAX-1;
  }
  else{
    front--; 
  }       
  deque[front] = item;
}
 
void InsertatRear(int item){
  if(IsFull()){
    printf("\nQueue Overflow\n");
    return;
  }
  if(front == -1){
    front = rear = 0;
  }
  else if(rear == MAX-1){
    rear = 0;
  }
  else{
    rear++;
  }          
  deque[rear]=item ;
}
 
void DeleteatFront(){

  if(IsEmpty()){
    printf("\nQueue Underflow\n");
    return;
  }
  if(front == rear)
  {
    front = rear = -1;
  }
  else if(front == MAX-1){
    front = 0;
  }                        
  else{
    front++;
  }
}                        
 
void DeleteatRear(){
  if(IsEmpty()){
    printf("\nQueue Underflow\n");
    return;
  }
  if(front == rear){
    front = rear = -1;
  }
  else if(rear == 0){
    rear = MAX-1;
  }
  else{
    rear--;
  }
}

bool IsFull(){
  if ( (front==0 && rear==MAX-1) || (front==rear+1) )
    return true;
  else
    return false;
}
 
bool IsEmpty(){
  if( front == -1)
    return true;
  else
    return false;
}


void Print(){
  int i = front;
  printf("The elements are: \n");
  while(i != rear){
    printf("%d\n", deque[i]);
    i = (i + 1)%MAX;
  }
  printf("%d\n",deque[rear]);
}
