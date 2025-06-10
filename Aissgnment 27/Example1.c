/* 1.  Write a program which accept string from user and copy the cotents of that string into another string 
(implement strncpy()function)*/



#include<stdio.h>

void StrCpyX(char *src,char *destination)
{
    while (*src !='\0')
    {
        *destination=*src;
        src++;
        destination++;

    }
    *destination = '\0';   
}
 
 int main()
 {
 char Arr[30]="Marvellous Multi OS";
 char Brr[30];

 StrCpyX(Arr,Brr);

    printf("%s",Brr);

    return 0;

 }