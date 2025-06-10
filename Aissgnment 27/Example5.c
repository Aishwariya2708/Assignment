/* 5.  Write a program which 2 string from user and concat second string after first string 
(implement strcat()function)*/



#include<stdio.h>

void StrCatX(char *src,char *destination )
{
    while (*src !='\0')
    {
     *destination = *src;
        destination++;
        src++;
        }
        while (*destination !='\0')
    {
        destination++;
    
        }
    *destination ='/0';  
}
 
 int main()
 {
 char Arr[30]="Marvellous Multi OS";
 char Brr[30];

 StrCatX(Arr,Brr);

    printf("%s",Arr);

    return 0;

 }