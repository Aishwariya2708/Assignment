/* 2. Write a recursive program which dislpay below pattern.
   Input: 5
   Output: 1 2 3 4 5 
*/

#include<stdio.h>

 void Display (int iNo)
 {
    static int iCnt=1;

 if(iCnt<=iNo)
 {
    printf("%d ",iCnt);
    iCnt++;
    Display(iNo);
 }


 }
int main()
{
    int iValue =0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}