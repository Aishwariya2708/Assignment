//3. Accept Character from user and check whether it is digit  or not (0-9)


#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

bool ChkDigit(char ch )
{
    if((ch>='0')&&(ch<='9'))
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

  bRet=ChkDigit(cValue);

  if(bRet == TRUE)
  {
    printf("It is Digit ");
  }
  else
  {
    printf("It is not a Digit");
  }
    return 0;
}