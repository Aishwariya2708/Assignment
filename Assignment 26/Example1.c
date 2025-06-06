/*1. Write a program which accept string from user and accept one character.check whethere that character
 is present in string */

 #include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef  int bool ;

bool ChkChar(char *str,char ch)
{
 while (*str != '\0')
    {
        if (*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}
 int main()
 {
 char Arr[20];
 char cValue;
 bool bRet=FALSE;

 printf("Enter string:\n");
 scanf("%[^\n]s",Arr);
getchar();
 printf("Enter the character:\n ");
 scanf("%c",&cValue);

 bRet=ChkChar(Arr,cValue);

 if(bRet == TRUE)
 {
    printf("character found");
 }
 else
 {
    printf("charcater not found");
 }

    return 0;

 }