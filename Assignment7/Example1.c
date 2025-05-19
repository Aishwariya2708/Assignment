//1.write a program which accept number from uder and display below pattern

#include<stdio.h>

void Display(int iNo)
{
 int iCnt = 0;
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        if(iCnt % 2 == 1)
        {
            printf("* ");
        }
        else            
        {
            printf("# ");
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;

}