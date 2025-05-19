//2.write a program which accept width & height of rectangle from user and calculate its area. 
//(Area =width*Height)


#include<stdio.h>
double RectArea(float fWidth,float fHeight )
{
    double area = fWidth * fHeight;
    return area;

}
int main()
{
    float fValue1=0.0, fValue2=0.0;
    double dRet=0.0;

    printf("Enter width:\n");
    scanf("%f",&fValue1);

     printf("Enter height:\n");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);
    printf("Area of Rectangle:%f",dRet);
    return 0;
}