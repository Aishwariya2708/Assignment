/*3. Write a program which accept string from user and accept one character.Return index of first  occurrence of that 
 character*/

 #include<stdio.h>

int FirstChar(char *str,char ch)
{
     int iCnt= 0;
    while (*str!= '\0')
    {
        if (*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
 
 int main()
 {
 char Arr[20];
 char cValue;
 int iRet=0;

 printf("Enter string:\n");
 scanf("%[^\n]s",Arr);
getchar();

 printf("Enter the character:\n ");
 scanf("%c",&cValue);

 iRet=FirstChar(Arr,cValue);

    printf("charcater location is %d",iRet);

    return 0;

 }