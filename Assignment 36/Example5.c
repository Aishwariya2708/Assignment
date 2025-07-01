//5.write a program which display Largest digits of all  element from  singly linked list .

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

void DisplayLargest(PNODE head)
{   
    int iNum = 0, idigit = 0, iMax = 0;

    printf("Largest digit of each element:\n");

    while (head != NULL)
    {
        iNum = head->data;
        iMax = 0;

        while (iNum != 0)
        {
            idigit = iNum % 10;
            if (idigit > iMax)
            {
                iMax = idigit;
            }
            iNum /= 10;
        }

        printf("Largest digit of %d is %d\n", head->data, iMax);
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
    
    InsertFirst(&head,419);
    InsertFirst(&head,532);
    InsertFirst(&head,250);
    InsertFirst(&head,11);

    Display(head);

    DisplayLargest(head);

        return 0;
}