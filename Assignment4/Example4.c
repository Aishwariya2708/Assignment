//4.write a program which accept number from user and return summation of all its non factors.

#include<stdio.h>
int SumNonFactors(int iNo)
{
   int iCnt=0;
   int iSum=0;
   
   if(iNo < 0)
   {
    iNo= -iNo;

   }
   for(iCnt=1;iCnt<iNo;iCnt++)
   {
    if((iNo%iCnt!=0))
    {
    
      iSum=iSum+iCnt;

      return iSum;
    }
}
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=SumNonFactors(iValue);
    printf("%d",iRet);
    
    
    return 0;
}