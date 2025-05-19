//4. write  a  program which accept number from user and display its table 


#include<stdio.h>

void Table(int iNo)
{

int iCnt = 1;
    while(iCnt <= 10)
    {
        printf("%d \n",iNo* iCnt);
        iCnt++;
    }
}


int main()
{
    int iValue=0;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}