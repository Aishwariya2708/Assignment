/*3.write a program which accpet one number and position from user and on that bit.return  modify number.*/


#include<iostream>
using namespace std;

typedef unsigned int UINT;
 
UINT OnBit( UINT iNo,int iPos)
{

    if (iPos < 1 || iPos > 32)
    {
        return iNo;  
    }
    
    UINT iMask =(1 << (iPos - 1)); 
    
    return iNo | iMask;
}


int main()
{
    UINT iValue=0;
    int iRet=0;
    int iLocation=0;

    cout<<"Enter number:\n";
    cin>>iValue;

    cout << "Enter bit position:\n";
    cin >> iLocation;

    iRet=OnBit(iValue,iLocation);

     cout << "Modified number after On bit at position " << iLocation <<":"<< iRet << "\n";

    return 0;
}