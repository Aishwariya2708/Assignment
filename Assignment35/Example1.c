//1. write  a program which displays which are perfect from singly linear linked list 

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


    void DisplayPerfect(PNODE first)
{
    int i = 0, iSum = 0;

    printf("\nPerfect numbers in the linked list:\n");

    while (first != NULL)
    {
        iSum = 0;

        for (i = 1; i <= first->data / 2; i++)
        {
            if (first->data % i == 0)
            {
                iSum += i;
            }
        }

        if (iSum == first->data)
        {
            printf("%d\n", first->data);
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
    InsertFirst(&head,6);
    InsertFirst(&head,41);
    InsertFirst(&head,17);
    InsertFirst(&head,28);
    InsertFirst(&head,11);

    Display(head);
  DisplayPerfect(head);
   
   

    return 0;
}