//5. Write a Recursive program which display below pattern.
// output: a b c d e f
#include<stdio.h>

void Display()
{
    static char ch = 'a';   
     
    if(ch<='f')
    {
        printf("%c ",ch);
        ch++;
        Display();
    }
}

int main()
{
    Display();
   

    return 0;
}