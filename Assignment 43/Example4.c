/* 4. Write a recursive program which accept number  from user and return Smallest digit.
 Input: 87983
 Output: 3
 */

 #include<stdio.h>

int Min (int iNo)
{
    static int iMin = 9;
    int iDigit = 0;

    if(iNo < 0)         
        iNo = -iNo;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        Min(iNo / 10);   
    }
    return iMin;

}
 int main()
 {
  int iValue=0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);  

    iRet = Min(iValue);

    printf("%d\n", iRet);

 }