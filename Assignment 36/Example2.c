//2.write a program which display all palidrome  elements of singly linked list .

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

void DisplayPallindrome(PNODE head)
{   
    printf("Palindrome elements are:\n");

    while (head != NULL)
    {
        int iNum = head->data;
        int iRev = 0;
        int iTemp = iNum;

        while (iTemp != 0)
        {
            iRev = (iRev * 10) + (iTemp % 10);
            iTemp /= 10;
        }

        if (iNum == iRev)
        {
            printf("%d\n", iNum);
        }

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
    InsertFirst(&head,414);
    InsertFirst(&head,17);
    InsertFirst(&head,28);
    InsertFirst(&head,11);

    Display(head);

    DisplayPallindrome(head);

        return 0;
}