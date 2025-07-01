//2. write a program which search Last occurence of particular element from singly linear linked list
//function  should  return position at which element is found 

#include<stdio.h>
#include<stdlib.h>

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
    void Display(PNODE first)
{
    while(first !=NULL)
    {
      printf("| %d | ->",first->data);
        first=first->next;
    }
    printf("NULL\n");
}

int SearchLastOcc(PNODE head, int no)
{
    int iPos= 1;
    int iPosLast=-1;

    while (head != NULL)
    {
        if (head->data == no)
        {
            iPosLast= iPos;
        }
        head = head->next;
        iPos++;
    }

    return iPosLast;
}

int main()
{
    PNODE head=NULL;
    int iValue=0;
    int iRet=0;
    

    InsertFirst(&head,70);
    InsertFirst(&head,30);
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);

    printf("Enter the element:\n ");
    scanf("%d", &iValue);

 iRet= SearchLastOcc(head,iValue);
 if (iRet != -1)
    {
        printf("Element %d found at position: %d\n", iValue,iRet);
    }
    else
    {
        printf("Element not found in the list.\n",iValue,iRet);
    }
    
    return 0;
}