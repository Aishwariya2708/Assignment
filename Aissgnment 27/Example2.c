/* 2.  Write a program which accept string from user and copy the cotents of that string into another string 
(implement strncpy()function)*/



#include<stdio.h>

void StrNCpyX(char *src,char *destination,int iCnt)
{
    while ((*src !='\0')&&(iCnt !=0))
    {
        *destination=*src;
        src++;
        destination++;
        iCnt--;

    }
    *destination = '\0';   
}
 
 int main()
 {
 char Arr[30]="Marvellous Multi OS";
 char Brr[30];

 StrNCpyX(Arr,Brr,10);

    printf("%s",Brr);

    return 0;

 }