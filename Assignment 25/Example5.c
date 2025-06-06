//5. write a program which  accept string from user and count number of white space.

#include<stdio.h>
int DisplayWhite(char *str)
{
    int iCnt=0;

while (*str != '\0')
    {
        if (*str ==' ') 
        {
           iCnt ++;
        }
        str++;
    }
    return iCnt;

}
int main()
{
    char Arr[50];
    int iRet=0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

 iRet=DisplayWhite(Arr);
printf("Number of whitespace is:%d\n",iRet);

    return 0;
}