//4. Accept chacter from user and check whether it is special symbol or not (!,@,#,$,%,^,&,*)

#include<stdio.h>

#define TRUE 1 
#define FALSE 0
typedef int bool;
  bool ChkSpecial(char ch )
  {
if (ch == '!' || ch == '@' || ch == '#' || ch == '$' ||
        ch == '%' || ch == '^' || ch == '&' || ch == '*')
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
    char cValue=0;
    bool bRet=FALSE;

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    bRet=ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("it is special character");
    }
    else
    {
        printf(" it is not a special character");
    }
    
    return 0;
  }