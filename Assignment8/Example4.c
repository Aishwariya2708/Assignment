//4.write a program which accept temperature in Fahrenheit and convert it into calsius. 
//(1 celsius=(Fahrenheit-32)*(5/9))


#include<stdio.h>
double FhtoCs (float fTemp)
{
     double celsius =(fTemp- 32) *5.0 /9.0;
    return celsius;

}
int main()
{
   float fValue=0.0;
     double dRet=0.0;

    printf("Enter temperature in Fahrenheit:\n");
    scanf("%d",&fValue);

    dRet=FhtoCs(fValue);
    printf("Temperature in Celsius:%d",dRet);
    return 0;
}