  /* 2. Accept character from user. if character is small display its corresponding capital character,and 
  if it small then display  its corresponding . in other cases display as it is  */

  #include<stdio.h>

  void Display(char ch )
  {
    if (ch >= 'a' && ch <= 'z')  
    {
        printf("Character is capital : %c\n", ch - 32);
    }
    else 
    {
        (ch >= 'A' && ch <= 'Z');
        printf("character is small : %c\n", ch + 32);
    }

  }
  int main()
  {
    char cValue=0;

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    Display(cValue);
    
    return 0;
  }