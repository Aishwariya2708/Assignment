/* 4. wite a recursive program which accept Number from user and return  its Factorial  .
Input: 5
Output: 120
 */

 #include<stdio.h>

 int Fact(int iNo)
 {
    static int  iSum=1;

    if(iNo >1)
    {
        iSum = iSum * iNo; 
        Fact(iNo -1);   
    }
    
    return iSum;
     
 }

 int main()
 {
    int iValue=0, iRet=0;
 

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("%d",iRet);

    return 0;

 }