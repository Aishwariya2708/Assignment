//3. write  a program which returns addition of all even element  from singly linear linked list 

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

    int AdditionEven(PNODE first)
{
     int iSum = 0;

    while (first != NULL)
    {
        if (first->data % 2 == 0)  // check if even
        {
            iSum += first->data;
        }
        first = first->next;
    }
    return iSum;
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
     int iRet=0;
   
    InsertFirst(&head,41);
    InsertFirst(&head,32);
    InsertFirst(&head,20);
    InsertFirst(&head,11);

    Display(head);

    iRet = AdditionEven(head);

    printf("Addition of all even elements: %d\n", iRet);
    return 0;
}