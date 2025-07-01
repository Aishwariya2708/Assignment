//5. write  a program which display addition of digits of  element  from singly linear linked list 

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

    int SumDigit(PNODE head)
{
    int iSum = 0;
    int iNum=0;

    while (head != NULL)
    {
         iNum = head->data;
         iSum=0;

        while (iNum != 0)
        {
            iSum += iNum % 10;
            iNum /= 10;
        }
        printf("Sum of digits of %d is: %d\n", head->data, iSum);
        head = head->next;
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
     

     InsertFirst(&head,640);
    InsertFirst(&head,240);
    InsertFirst(&head,20);
    InsertFirst(&head,230);
    InsertFirst(&head,110);

    Display(head);

     SumDigit(head);
   
    return 0;
}