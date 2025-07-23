/* 1. Write a recursive program which accept string from user and count white spaces
 Input: HE llo WOr ID
 Output: 3
 */

 #include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCount = 0;

    if(*str != 0)
    {
        if(*str == ' ')
        {
            iCount++;
        }
        WhiteSpace(str + 1);
    }

    return iCount;

}
 int main()
 {
    char Arr[20];
    int iRet = 0;

    printf("Enter string: ");

    scanf(" %[^\n]", Arr);  

    iRet = WhiteSpace(Arr);

    printf("%d\n", iRet);

 }