//1.write  a program  which accept the number from user and if numbers is less than 50 then print small, 
// if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print lagre 

#include<stdio.h>
 void Number(int iNo)
 {
    if(iNo<50)
    {
        printf("Small\n");
    }
    else if((iNo>= 50) &&(iNo<100))
    {
        printf("Medium\n");
    }
    else 
    {
        printf("Large\n");
    }
}

 
int main()
{
    int iValue=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;

}