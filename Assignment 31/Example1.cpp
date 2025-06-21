// 1. write a program which accept one number from user and off 7th bit of that number if it is on. 
//Return modified number.


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit( UINT iNo )
{
    UINT  iMask= 64;
    return iNo & (~iMask); 
}


int main()
{
    UINT iValue=0;
    int iRet=0;

    cout<<"Enter number:\n";
    cin>>iValue;

    iRet=OffBit(iValue);

cout << "Modified number after turning OFF 7th bit: "<< iRet << "\n";

    return 0;
}