// 5. write a program which accept one number from user and its first 4 bits .Return modified number.


#include<iostream>
using namespace std;

typedef unsigned int UINT;
 
UINT OnBit( UINT iNo)
{
    UINT  iMask= 0x0f;
    return iNo | iMask; 
}


int main()
{
    UINT iValue=0;
    int iRet=0;

    cout<<"Enter number:\n";
    cin>>iValue;

    iRet=OnBit(iValue);

cout << "Modified number after turning  ON first 4 bits  :"<<iRet << "\n";

    return 0;
}