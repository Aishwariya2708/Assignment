//3.write a program which accept distance in kilometer and convert it into meter. from user and calculate its area. 
//(1kilometee=1000 meter )


#include<stdio.h>
int KMtoMeter (int iNo)
{
    return iNo * 1000;

}
int main()
{
    int iValue=0;
     int iRet=0;

    printf("Enter distance:\n");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);
    printf("Distance in meters:%d",iRet);
    return 0;
}