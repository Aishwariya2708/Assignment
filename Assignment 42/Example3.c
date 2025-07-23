/* 3. wite a recursive program which accept String from user and count number of character  .
Input: Hello
Output: 5
 */

 #include<stdio.h>

 int Strlen(char *str)
 {
    static int iCount = 0;

    if(*str != 0)
    {
        iCount++;
        Strlen(str + 1);
    }

    return iCount;  
 }

 int main()
 {
    int iRet=0;
    char Arr[20];

    printf("Enter String : ");
    scanf("%s",Arr);

    iRet = Strlen(Arr);

    printf("%d",iRet);

    return 0;

 }