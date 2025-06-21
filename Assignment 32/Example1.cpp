/*1.write a program which accpet one number and position from user and check whether bit  at that position is on 
or off.It  bit is one return TURE otherwise return FALSE.*/




#include<iostream>
using namespace std;

typedef unsigned int UINT;
 
bool ChkBit( UINT iNo,int iPos)
{
    if (iPos<1 || iPos>32)  
    {
        cout << "Invalid position\n";
        return false;
    }

    UINT iMask = 1 << (iPos - 1);  
    UINT iResult = iNo & iMask; 

    return (iResult != 0);
}


int main()
{
    UINT iValue=0;
    bool bRet=false;
    int iLocation=0;

    cout<<"Enter number:\n";
    cin>>iValue;

    cout << "Enter bit position:\n";
    cin >> iLocation;

    bRet=ChkBit(iValue,iLocation);

     if (ChkBit(iValue,iLocation))
       {

        cout<<"Bit is ON \n";
       } 
    else
    {
        cout << "Bit is OFF\n";
    }

    return 0;
}