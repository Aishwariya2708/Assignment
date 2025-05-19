//5.Accept one number from user and print that number of * on Screen.

#include<stdio.h>
void Accept(int iNO)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNO;iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    //iValue=5;
    Accept(iValue);
    return 0;

}