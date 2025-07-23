/* 4. Write a recursive program which dislpay below pattern.
   Input: 6
   Output:  A B C D E F  
*/

#include<stdio.h>

 void Display (int iNo)
 {
    static char ch = 'A';

    if(iNo >= 1)
    {
        if(ch < 'A' + iNo)
        {
            printf("%c ", ch);
            ch++;
            Display(iNo);
        }
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