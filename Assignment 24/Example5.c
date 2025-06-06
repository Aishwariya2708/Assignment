
/* 5. write a program which accept string from user and display it in reverse order .*/ 


#include<stdio.h>
void Reverse(char *str)
{
     int iLength = 0;
    char *start = str;
   
    while (*str != '\0')
    {
        iLength++;
        str++;
    }
    str--;

    printf("Reversed string: ");
    for (int i = 0; i < iLength; i++)
    {
        printf("%c", *str);
        str--;
    }
    printf("\n");
}


int main()
{
     char arr[20];
      int iRet=0;

     printf("Enter string:\n");
     scanf("%[^'\n']s",arr);

    Reverse(arr);
    return 0;

}



