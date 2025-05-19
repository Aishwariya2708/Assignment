//5.write a program which return diffrence between even factorialand odd factorial of given number

#include<stdio.h>

int FactorialDiff(int iNo)
{
  int iEvenFact = 1;
  int iOddFact = 1;
  int iCnt=0;

    if(iNo < 0) 
        iNo = -iNo;

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
            iEvenFact *= iCnt;
        else
            iOddFact *= iCnt;
    }

    return iEvenFact - iOddFact;
}




int main()
{
    int iValue=0,iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);
    printf(" Factorial difference  is %d",iRet);

    return 0;

}