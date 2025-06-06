  /* 3. Accept character from user. if it is capital display all the  character from the input character till Z.
  if input character is small then the print all the characters in reverse  order till a .in other cases return 
  directly. */

  #include<stdio.h>

  void Display(char ch )
  {
    int i=0;
    
   if (ch >= 'A' && ch <= 'Z')  
    {
        for (char i = ch; i <= 'Z'; i++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
    else  
    {
        (ch >= 'a' && ch <= 'z');

        for (char i = ch; i >= 'a'; i--)
        {
            printf("%c ", i);
        }
        printf("\n");
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