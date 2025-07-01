//4.write a program which display smallest  digits of all  element from  singly linked list .

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

void DisplaySmall(PNODE head)
{   
    int iNum = 0, idigit = 0, iMin = 0;

    printf("Smallest digit of each element:\n");

    while (head != NULL)
    {
        iNum = head->data;
        iMin = 9;

        while (iNum != 0)
        {
            idigit = iNum % 10;
            if (idigit < iMin)
            {
                iMin = idigit;
            }
            iNum /= 10;
        }

        printf("Smallest digit of %d is %d\n", head->data, iMin);
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
    
    InsertFirst(&head,41);
    InsertFirst(&head,32);
    InsertFirst(&head,20);
    InsertFirst(&head,11);

    Display(head);

    DisplaySmall(head);

        return 0;
}