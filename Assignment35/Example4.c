//4. write  a program which returns second Maximum  element  from singly linear linked list 

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

    int SecMaximum(PNODE head)
{
    int iMax1 = -1, iMax2 = -1;

    while (head != NULL)
    {
        if (head->data > iMax1)
        {
            iMax2 = iMax1;
            iMax1 = head->data;
        }
        else if (head->data > iMax2 && head->data != iMax1)
        {
            iMax2 = head->data;
        }
        head = head->next;
    }

    return iMax2; 
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
   
    InsertFirst(&head,240);
    InsertFirst(&head,320);
    InsertFirst(&head,230);
    InsertFirst(&head,110);

    Display(head);

    iRet = SecMaximum(head);

    printf(" second maximum element linear linked list are: %d\n", iRet);
    return 0;
}