//2. write a program which accept number from user and check where it contains 0 in it or not.

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

bool ChkZero(int iNo)
{
int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 0)
    {
        return TRUE;  
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}

int main()
{
    int iValue=0;
    bool bRet =FALSE;
    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if(bRet==TRUE)
    {
        printf("It is contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    
    return 0;
}