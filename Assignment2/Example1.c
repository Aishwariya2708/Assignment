// 1. Accept one number from user and print that number of * on Screen 

#include<stdio.h>
void Display(int iNO)
{
    int iCnt=0;

    while (iCnt<iNO)
    {
        printf("*");
        iCnt++;
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    
    Display(iValue);
    return 0;

}