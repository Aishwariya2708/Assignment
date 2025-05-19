//1.write a program which accept radius of circle from user and calculate its area. 
//consider value of PI as 3.14(Area =PI*Radius*Radius)


#include<stdio.h>
double CircleArea(float fRadius)
{
    
    double PI = 3.14;
    double area = PI *fRadius *fRadius;
    return area;

}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter Radius:\n");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);
    printf("Area of Circle:%f",dRet);
    return 0;
}