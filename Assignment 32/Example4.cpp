/*4.write a program which accpet one number and position from user and toggle that bit.return  modify number.*/


#include<iostream>
using namespace std;

typedef unsigned int UINT;
 
UINT ToggleBit( UINT iNo,int iPos)
{
 UINT  iMask=1;
   UINT iResult=0;

   iMask=iMask<<(iPos-1);

    iResult=iNo^iMask;
    return iResult;
}


int main()
{
    UINT iValue=0,iLocation=0,iRet=0;
    
    

    cout<<"Enter number:\n";
    cin>>iValue;
    cout<<"Enter the position\n";
    cin>>iLocation;
    
    iRet = ToggleBit(iValue,iLocation);

    cout<<"Modify  Number is :"<<iRet<<"\n";

    return 0;
} 