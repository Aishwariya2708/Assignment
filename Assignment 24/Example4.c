/* 4. write a program which accept string from user and  check whether it contains vowels in it or not.*/ 


#include<stdio.h>
# define TRUE 1
#define FALSE 0
typedef int bool ;
bool ChkVowel(char *str)
{
    
    while (*str != '\0')
    {
        char ch = *str;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
     char arr[20];
     bool bRet=FALSE;

     printf("Enter string:\n");
     scanf("%[^'\n']s",arr);

     bRet=ChkVowel(arr);

     if(bRet ==TRUE)
     {
        printf("Contains Vowel");
     }
     else
     {
        printf("there is no vowel");
     }

    return 0;

}



