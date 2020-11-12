#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
}*head;
 
void CLCreation(int n);
void display();

int main()
{
    int n;
    head = NULL;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
  
    CLCreation(n); 
    display();
    return 0;
}

void CLCreation(int n)
{
    int i, num;
    struct node *lastNode, *newNode;

    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        head->data = num;
        head->next = NULL;
        lastNode = head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            printf(" Input data for node %d : ", i);
            scanf("%d", &num);
            newNode->data = num;
            newNode->next = NULL;	// next address of new node set as NULL
            lastNode->next = newNode;	// previous node is linking with new node
            lastNode = newNode;   		// previous node is advanced
        }
        lastNode->next = head; 		//last node is linking with first node
    }
}

void display()
{
    struct node *temp;
    int n = 1;

    if(head == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        temp = head;
        printf("\n\n Data entered in the list are :\n");

        do {
            printf(" Data %d = %d\n", n, temp->data);
            temp = temp->next;
            n++;
        }while(temp != head);
    }
}


                                    
