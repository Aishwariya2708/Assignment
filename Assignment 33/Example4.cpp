/*4. write a program which accept one number ,two position from user and check whether bit at first  or bit at
 second position is ON or OFF.*/

 

#include<iostream>
using namespace std;

typedef unsigned int UINT;
 
bool ChkBits( UINT iNo,UINT iPos1,UINT iPos2)
{
    UINT iMask1 = 1 << (iPos1 - 1);
    UINT iMask2 = 1 << (iPos2 - 1);

    if ((iNo & iMask1) || (iNo & iMask2))
    {
        return true;  
    }
    else
    {
        return false; 
    }
}

int main()
{
    UINT iValue=0;
    bool bRet=false;
    UINT iLocation1=0;
    UINT iLocation2=0;


    cout << "Enter a number: ";
    cin >> iValue;

    cout << "Enter first bit position: ";
    cin >> iLocation1;

    cout << "Enter second bit position: ";
    cin >> iLocation2;

    if (ChkBits(iValue, iLocation1, iLocation2))
    {
       cout<<"bit position is on"<<iLocation2;  
    }
    else
    {
      cout<<"bit position is off"<<iLocation2;  
    }
    return 0 ;
}