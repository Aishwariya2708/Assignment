//1.write a program which a reverse each elements of singly linked list .

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
void Reverse(PNODE head)
{
int iNum=0;
int iRev=0;

    while (head != NULL)
    {
        int iNum = head->data;
        int iRev = 0;

        while (iNum != 0)
        {
            iRev = (iRev * 10) + (iNum % 10);
            iNum /= 10;
        }
        head->data = iRev;
        head = head->next;
    }
}

void Display(PNODE first)
{
  
       while(first !=NULL)
    { printf("| %d | ->",first->data);
        first=first->next;
    }
      printf("NULL\n");;
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

    Reverse(head);
    printf("Reverse of each elements: \n");
    Display(head);
    
        return 0;
}