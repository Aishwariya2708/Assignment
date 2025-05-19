//1. write a program which accept number from user and print that number of $ & * on screen 


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if (iNo<0) 
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo *2; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            printf("*");
        }
        else
        {
            printf("$");
        }
    }


}


int main()
{
    int iValue=0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}