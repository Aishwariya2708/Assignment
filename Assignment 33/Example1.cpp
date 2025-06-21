/*1. write a program which accept one number from user and count number of ON(1)bits in it without using %
 and / operator*/

 

#include<iostream>
using namespace std;

typedef unsigned int UINT;
 
UINT CountBit( UINT iNo)
{
 UINT iCount=0;
 
    while(iNo != 0)
    {
        iNo = iNo & (iNo - 1);
        iCount++;
    }

    return iCount;
}
int main()
{
    UINT iValue=0,iRet=0;
    
    cout<<"Enter number:\n";
    cin>>iValue;
    
    iRet = CountBit(iValue);

    cout<<"Number of ON bit  is :"<<iRet<<"\n";

    return 0;
} 
