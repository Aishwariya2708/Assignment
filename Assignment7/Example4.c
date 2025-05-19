//4.write a program to find odd factorial of given number

#include<stdio.h>

int OddFactorial(int iNo)
{
   int iFact = 1;
   int iCnt=0;

    if(iNo < 0)
        iNo = -iNo;

    for(int iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iFact *= iCnt;
        }
    }

    return iFact;
}



int main()
{
    int iValue=0,iRet=0;

    printf("Enter number of USD:\n");
    scanf("%d",&iValue);

    iRet=OddFactorial(iValue);
    printf("Odd Factorial of number is %d",iRet);

    return 0;

}