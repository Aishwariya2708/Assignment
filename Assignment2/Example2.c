// 2. Accept one number from user and print that number of * on Screen.


#include<stdio.h>
void Display(int iNO)
{
 

    while (iNO>0)
    {
        printf("*");
        iNO--;
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