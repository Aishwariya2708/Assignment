//1. Accept Character from user and check whether it is alphabet or not (A-Z  a-z)


#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

bool ChkAlpha(char ch )
{
    if((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
 {
    return TRUE;
 }
  else
   {
    return FALSE;
 }
}

int main()
{
  char cValue='\0';
  bool bRet=FALSE;

  printf("Enter the character :\n");
  scanf("%c",&cValue);

  bRet=ChkAlpha(cValue);

  if(bRet == TRUE)
  {
    printf("It is Charater ");
  }
  else
  {
    printf("It is not a character");
  }
    return 0;
}