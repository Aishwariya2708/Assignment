//3. write a program which return addition of all  element from singly linear linked list.

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
int Addition(PNODE head)
{
    int sum = 0;
    while (head != NULL)
    {
        sum += head->data;
        head = head->next;
    }
    return sum;
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

    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

   // Display(head);

   // printf("Enter the element:\n ");
    //scanf("%d", &iValue);

    iRet = Addition(head);
    Display(head);
    printf("Addition of all elements: %d\n", iRet);

    return 0;
}