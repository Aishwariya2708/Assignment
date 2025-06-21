/*5.write a program which accpet one number and position from user and toggle contents of first and last nibble 
of the number.return  modify number.(Nibble is a group of four bits )*/


#include<iostream>
using namespace std;

typedef unsigned int UINT;
 
UINT ToggleBit( UINT iNo)
{
 UINT  iMask=0xf000000f;
   UINT iResult=0;



    iResult=iNo^iMask;
    return iResult;
}


int main()
{
    UINT iValue=0,iRet=0;
    
    

    cout<<"Enter number:\n";
    cin>>iValue;
    
    
    iRet = ToggleBit(iValue);

    cout<<"Modify  Number after toggle first and last nibble is :"<<iRet<<"\n";

    return 0;
} 