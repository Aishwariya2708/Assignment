/*2.write a program which accpet one number and position from user and off that bit.return  modify number.*/


#include<iostream>
using namespace std;

typedef unsigned int UINT;
 
UINT OFFBit( UINT iNo,int iPos)
{

    if (iPos < 1 || iPos > 32)
    {
        return iNo;  
    }
    
    UINT iMask = ~(1 << (iPos - 1)); 
    
    return iNo & iMask;
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

    iRet=OFFBit(iValue,iLocation);

     cout << "Modified number after OFF bit at position " << iLocation <<":"<< iRet << "\n";

    return 0;
}