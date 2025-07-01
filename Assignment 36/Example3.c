//3.write a program which display product of  all  digits of all  element from  singly linked list .

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

void DisplayProduct(PNODE head)
{   
 int idigit=0;
 
    while (head != NULL)
    {
        int iNum = head->data;
        int iProduct = 1;

        if (iNum == 0)
        {
        iProduct = 0;
        }
        else
        {
            while (iNum != 0)
            {
                int digit = iNum % 10;

                if (digit != 0)  
                    iProduct *= digit;
               
                iNum /= 10;
            }
        }

        printf("Product of digits of %d is %d\n", head->data, iProduct);

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

    DisplayProduct(head);

        return 0;
}