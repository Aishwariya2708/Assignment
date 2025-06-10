/* 3.  Write a program which accept string from user and copy the  capital character of that string into another
 string*/



#include<stdio.h>

void StrCpyCap(char *src,char *destination )
{
    while (*src !='\0')
    {
        if((*src>='A')&&(*src<='Z'))
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

 StrCpyCap(Arr,Brr);

    printf("%s",Brr);

    return 0;

 }