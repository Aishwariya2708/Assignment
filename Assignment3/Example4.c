//4. Accept one character from user and convert case of that character

#include<stdio.h>

void DisplayConvert(char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')  
    {
        printf("Converted character: %c\n", CValue + 32); 

    }
    else if(CValue >= 'a' && CValue <= 'z')  
    {
        printf("Converted character: %c\n", CValue - 32);  
    }
    else
    {
        printf("Invalid input. Please enter an alphabet.\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character: ");
    scanf(" %c", &cValue); 
    DisplayConvert(cValue);

    return 0;
}
