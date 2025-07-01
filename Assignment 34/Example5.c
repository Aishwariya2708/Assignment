//5 . write a program which return  smallest  element from singly linear linked list.

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


void InsertFirst(PPNODE first,int no)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if(*first==NULL)  
    {
       *first=newn;
    }
    else    
    {
        newn->next=*first;
        *first=newn;
    }
}
int Minimum(PNODE head)
{
    int iMin=0;
    if (head == NULL)
    {
        return -1;
    }

    iMin = head->data;

    while (head != NULL)
    {
        if (head->data < iMin)
        {
            iMin = head->data;
        }
        head = head->next;
    }

    return iMin;
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

int main()
{
    PNODE head=NULL;
    int iValue=0;
    int iRet=0;

    InsertFirst(&head,240);
    InsertFirst(&head,320);
    InsertFirst(&head,230);
    InsertFirst(&head,110);

    iRet = Minimum(head);
    Display(head);
    printf("Smallest element from the Linked list : %d\n", iRet);

    return 0;
}