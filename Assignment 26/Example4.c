/*4. Write a program which accept string from user and accept one character.Return index of last  occurrence of that 
 character*/

 #include<stdio.h>

int LastChar(char *str,char ch)
{
     int iIndex=0;
     int iLastIndex=-1;
    while (*str!= '\0')
    {
        if (*str == ch)
        {
         iLastIndex = iIndex;

        }
        iIndex++;
        str++;
    }
    return iLastIndex;
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

 iRet=LastChar(Arr,cValue);

    printf("charcater location is %d",iRet);

    return 0;

 }