/* 4.  Write a program which accept string from user and copy the  small character of that string into another
 string*/



#include<stdio.h>

void StrCpySmall(char *src,char *destination )
{
    while (*src !='\0')
    {
        if((*src>='a')&&(*src<='z'))
        {
          *destination=*src;
        destination++;  
        }
       
        src++;

    }
    *destination = '\0';   
}
 
 int main()
 {
 char Arr[30]="Marvellous Multi OS";
 char Brr[30];

 StrCpySmall(Arr,Brr);

    printf("%s",Brr);

    return 0;

 }