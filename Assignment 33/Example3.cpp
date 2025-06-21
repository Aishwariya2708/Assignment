/*3. write a program which accept one number from user and check where 9th or 12th bit is on or off.
 and / operator*/

 

#include<iostream>
using namespace std;

typedef unsigned int UINT;
 
bool ChkBit( UINT iNo)
{
     UINT iMask = 0;
    iMask = 2304;

    if ((iNo & iMask) != 0)
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
    
    cout<<"Enter number:\n";
    cin>>iValue;
    
    bRet = ChkBit(iValue);
    if (bRet)
    {
        cout << "Either 9th or 12th bit is ON.\n";
    }
    else
    {
        cout << "Both 9th and 12th bits are OFF.\n";
    }
    return 0;
} 
