/* 3. Write a recursive program which accept string from user and count number of small characters.
 Input: HElloWOrID
 Output: 3
 */

 #include<stdio.h>

int Small(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        Small(str + 1);  
    }

    return iCount;

}
 int main()
 {
    char Arr[20];
    int iRet = 0;

    printf("Enter string: ");

    scanf(" %[^\n]", Arr);  

    iRet = Small(Arr);

    printf("%d\n", iRet);

 }