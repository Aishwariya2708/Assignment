/* 3. write a program which accept string from user and  return diffrence between  frequency of small characters 
and frequency of capital characters.*/


#include<stdio.h>

int Difference(char *str)
{
    int iCnt1=0;
    int iCnt2=0;

    while(*str !='\0')
    {
        
    if((*str>='a')&&(*str<='z'))
    {
    
    iCnt1++;
   
    }
     if((*str>='A')&&(*str<='Z'))
    {
       
    iCnt2++;
 
    }

    str++;
  }

return iCnt1 - iCnt2;
}
int main()
{
     char arr[20];
     int iRet=0;

     printf("Enter string:\n");
     scanf("%[^'\n']s",arr);

     iRet=Difference(arr);

     printf("%d",iRet);

    return 0;

}



