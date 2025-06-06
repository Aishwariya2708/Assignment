/*5. Write a program which accept string from user reverse that string in place */

 #include<stdio.h>

void StrRevX(char *str)
{
    int i = 0;

    while (str[i] != '\0')
     {
        i++;
    }
    i--;  

    for (int j = 0; j < i; j++, i--)
    {
        char ch = str[j];
        str[j] = str[i];
        str[i] = ch;
    }
}
 
 int main()
 {
 char Arr[20];

 printf("Enter string:\n");
 scanf("%[^'\n']s",Arr);

 StrRevX(Arr);

    printf("modified string is %s",Arr);

    return 0;

 }