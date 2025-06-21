// 3. write a program which accept one number from user and toggle 7th bit of that number.Return modified number.


#include<iostream>
using namespace std;

typedef unsigned int UINT;
 
UINT ToggleBit( UINT iNo)
{
    UINT  iMask= 64 ;
    return iNo  ^ iMask; 
}


int main()
{
    UINT iValue=0;
    int iRet=0;

    cout<<"Enter number:\n";
    cin>>iValue;

    iRet=ToggleBit(iValue);

cout << "Modified number after toggle 7th bit: "<< iRet << "\n";

    return 0;
}