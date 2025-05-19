// Write a program which accept one  number from user and print that number of even numbers on screen

#include<stdio.h>

void PrintEven(int iNo)
{
    
    int iCnt = 0;
    int iNum = 2;

    if(iNo<=0)
    {
          printf("Please enter a positive number.\n");
          return;
    }
           for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n", iNum);
        iNum += 2; 
    }
        
    }

int main()
{
    
    int iValue=0;
    printf("Enter number:");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;

}