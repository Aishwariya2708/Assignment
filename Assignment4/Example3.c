//3.write a program ehich accept number from user and display all its non factors.

//time complexity o(n)

#include<stdio.h>
void DisplayNonFactors(int iNo)
{
   int iCnt=0;
   
   if(iNo < 0)// updator
   {
    iNo= -iNo;

   }
   for(iCnt=1;iCnt<iNo;iCnt++)
   {
    if((iNo%iCnt!=0))
    {
    
        printf("Non Factors is%d\n",iCnt);
    }
   }
}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);
    
    
    return 0;
}