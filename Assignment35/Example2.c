//2. write  a program which displays all elements which are prime from singly linear linked list 

#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int bool;

struct node
{
    int data;
     struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE head,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->next=NULL;
    newn->data=no;
    
    if(*head == NULL)
    {
        *head=newn;
    }
    else
    {
        newn->next=*head;
        *head=newn;
    }
}

    void DisplayPrime(PNODE first)
{
    int i = 0;
    int iPrime=0;
    int iNum=0;

    printf("\nPrime numbers in the linked list:\n");

    while (first != NULL)
{
    int iNum = first->data;
    int iPrime = 1;

    if (iNum <= 1)
    {
        iPrime = 0;
    }
    else
    {
        for (int i = 2; i <= iNum / 2; i++)
        {
            if (iNum % i == 0)
            {
                iPrime = 0;
                break;
            }
        }
    }

    if (iPrime)
    {
        printf("%d\n", iNum);
    }
    first = first->next;
}
}

    void Display(PNODE first)
{
    while(first !=NULL)
    { printf("| %d | ->",first->data);
        first=first->next;
    }
      printf("NULL\n");
}
int main()
{
    PNODE head=NULL;

    InsertFirst(&head,89);
    InsertFirst(&head,22);
    InsertFirst(&head,41);
    InsertFirst(&head,17);
    InsertFirst(&head,20);
    InsertFirst(&head,11);

    Display(head);
  DisplayPrime(head);
   
   

    return 0;
}