//1. Write a Recursive program which display below pattern.
// output: * * * * *
#include<stdio.h>

void Display()
{
    static int i=1;  
     
    if(i<=5)
    {
        printf("* ",i);
        i++;
        Display();
    }
}

int main()
{
    Display();
   

    return 0;
}