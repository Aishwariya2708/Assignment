  /* 5.Accept chacter from user and display its ASCII valur in Decimal,Hexadecimal and Octal format */

  #include<stdio.h>

  void Display()
  {
   char ch = 0;

    printf("Enter a character:\n  ");
    scanf(" %c", &ch); 

    printf("Character: %c\n", ch);
    printf("Decimal: %d\n", ch);
    printf("Hexadecimal: 0%X\n", ch);
    printf("Octal: 0%o\n", ch);
}


  int main()
  {
    Display();
    
    return 0;
  }