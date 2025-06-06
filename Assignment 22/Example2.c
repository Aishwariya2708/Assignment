//2. Accept Character from user and check whether it is capital or not (A-Z)


#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

bool ChkCapital(char ch )
{
    if((ch>='A')&&(ch<='Z'))
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

  printf("Enter the Capital character :\n");
  scanf("%c",&cValue);

  bRet=ChkCapital(cValue);

  if(bRet == TRUE)
  {
    printf("It is capital Charater ");
  }
  else
  {
    printf("It is not a  capital character");
  }
    return 0;
}