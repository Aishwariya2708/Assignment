/* 3. Write a recursive program which dislpay below pattern.
   Input: 5
   Output: 5 4 3 2 1  
*/

#include<stdio.h>

 void Display (int iNo)
 {
    static int iCnt=0;

 if(iNo >= 1)
    {
        printf("%d ", iNo);
        Display(iNo - 1);
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