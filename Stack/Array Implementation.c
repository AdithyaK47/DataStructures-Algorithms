#include<stdio.h>
#include<stdbool.h>

#define MAX_SIZE 101

int A[MAX_SIZE]; 
int top = -1;  

//Push function to push elements into stack
void Push(int x) 
{
  if(top == MAX_SIZE -1) { 
		printf("Error: stack overflow\n");
		return;
	}
	A[++top] = x;
}

//Pop function to pop elements out of stack
void Pop() 
{
	if(top == -1) { 
		printf("Error: No element to pop\n");
		return;
	}
	top--;
}

//Top function which returns top element of the stack
int Top() 
{
	return A[top];
}

//IsEmpty function which returns whether the stack is empty or not
bool IsEmpty()
{
    if(top == -1) return true;
    return false;
}

//Print function which prints the elements in a stack
void Print(){
  for(int i = top; i >= 0; i--){
    printf("%d\n", A[i]);
  }
}

