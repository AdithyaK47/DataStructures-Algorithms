#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;                        
    struct Node *next;           
}* head;

void NodeInsertatBegin(int num)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    if(newNode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        newNode->data = num; //Links the data part
        newNode->next = head; //Links the address part
        head = newNode; //Makes stnode as first node
    }
}

void NodeInsertatEnd(int num)
{
    struct Node *newNode, *tmp;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    if(newNode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        newNode->data = num;     //Links the data part
        newNode->next = NULL; 
        tmp = head;
        while(tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = newNode;  //Links the address part
    }
}

void NodeInsertatPos(int data, int position) {
    struct Node* newNode = malloc(sizeof(struct Node));
    // Not at beginning
    newNode->data = data;
    newNode->next = NULL;

    struct Node* previousNode = head;
    for (int i = 0; i < position - 2; i++) {
        previousNode = previousNode->next;
    }

    newNode->next = previousNode->next;
    previousNode->next = newNode;
}

