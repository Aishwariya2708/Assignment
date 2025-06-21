//3. write a program which check whether 7th & 15th &21st,28th bit is ON or OFF.

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit( UINT iNo )
{
    UINT  iMask= 135281752;
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
        cout<<" 7th & 15th & 21st&28th bit is ON\n";
    }
    else
    {  cout<<" 7th & 15th & 21st&28th bit is OFF\n";
    }

    return 0;
}