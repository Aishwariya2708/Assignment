/* 5. wite a recursive program which accept Number from user and return  its product of digits .
Input: 523
Output: 30
 */

 #include<stdio.h>

 int Mul(int iNo)
 {
    static int  iMul=1;

     if(iNo != 0)
    {
        int digit = iNo % 10;

        iMul = iMul * digit;
        
        Mul(iNo / 10);
    }
    
    return iMul;
     
 }

 int main()
 {
    int iValue=0, iRet=0;
 

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Mul(iValue);

    printf("%d",iRet);

    return 0;

 }