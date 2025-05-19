//5. write  a  program which accept number from user and display its table in reverse. 


#include<stdio.h>

void TableRev(int iNo)
{

int iCnt = 10;
    while(iCnt >= 1)
    {
        printf("%d\n",iNo* iCnt);
        iCnt--;
    }
}


int main()
{
    int iValue=0;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}