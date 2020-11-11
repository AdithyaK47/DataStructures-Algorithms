#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node * prev;
    struct node * next;
}*head, *tail;
 

void DLcreation(int n);
void display();

int main()
{
    int n;
    head = NULL;
    tail = NULL;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);

    DLcreation(n); 
    display();
    return 0;
}
 
void DLcreation(int n)
{
    int i, num;
    struct node *newNode;
 
    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));
        if(head != NULL)
        {
            printf(" Input data for node 1 : "); // assigning data in the first node
            scanf("%d", &num);
 
            head->num = num;
            head->prev = NULL;
            head->next = NULL;
            tail = head;
// putting data for rest of the nodes
            for(i=2; i<=n; i++)
            {
                newNode = (struct node *)malloc(sizeof(struct node));
                if(newNode != NULL)
                {
                    printf(" Input data for node %d : ", i);
                    scanf("%d", &num);
                    newNode->num = num;
                    newNode->prev = tail;    // new node is linking with the previous node
                    newNode->next = NULL;
 
                    tail->next = newNode;   // previous node is linking with the new node
                    tail = newNode;            // assign new node as last node
                }
                else
                {
                    printf(" Memory can not be allocated.");
                    break;
                }
            }
        }
        else
        {
            printf(" Memory can not be allocated.");
        }
    }
}
void display()
{
    struct node * temp;
    int n = 1;
    if(head == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        temp = head;
        printf("\n\n Data entered on the list are :\n");
 
        while(temp != NULL)
        {
            printf(" node %d : %d\n", n, temp->num);
            n++;
            temp = temp->next; // current pointer moves to the next node
        }
    }
}
