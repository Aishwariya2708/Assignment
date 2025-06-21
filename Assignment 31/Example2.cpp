// 2. write a program which accept one number from user and off 7th and 10th  bit of that number. 
//Return modified number.


#include<iostream>
using namespace std;

typedef unsigned int UINT;
 
UINT OffBit( UINT iNo )
{
    UINT  iMask= 64  | 512;
    return iNo & (~iMask); 
}


int main()
{
    UINT iValue=0;
    int iRet=0;

    cout<<"Enter number:\n";
    cin>>iValue;

    iRet=OffBit(iValue);

cout << "Modified number after turning OFF 7th  and 10th bit: "<< iRet << "\n";

    return 0;
}