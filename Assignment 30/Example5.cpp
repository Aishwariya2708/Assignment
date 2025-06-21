//5. write a program which check whether first and last bit is On or OFF.First bit means bit number 1 and 
// last bit means bit number 32.

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit( UINT iNo )
{
    UINT  iMask=2147483649;
   UINT iResult=0;

    iResult=iNo&iMask;
    return(iResult ==iMask);
}


int main()
{
    UINT iValue=0;
    bool bRet=false;

    cout<<"Enter number:\n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet==true)
    {
        cout<<"1st & 32 bit is ON\n";
    }
    else
    {
        cout<<"1st & 32 bit is OFF\n";
    }

    return 0;
}