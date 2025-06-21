/*5. write a program which accept one number from user and range of position from user .toggle all bits from 
that range*/

 

#include<iostream>
using namespace std;

typedef unsigned int UINT;
 
UINT ToggleBitsRange( UINT iNo,int iStart,int iEnd)
{
     UINT iMask = 0;
     int i =0;
    for (int i = iStart; i <= iEnd; i++)
    {
        iMask = iMask | (1 << (i - 1));
    }

    return iNo ^ iMask;
}


int main()
{
    UINT iValue=0;
    UINT iRet=0;
    UINT iStart=0;
    UINT iEnd=0;


    cout << "Enter a number: ";
    cin >> iValue;

    cout << "Enter starting bit position: ";
    cin >> iStart;

    cout << "Enter ending bit position: ";
    cin >> iEnd;

    iRet = ToggleBitsRange(iValue, iStart, iEnd);

    cout << "Modified number after toggle bits from position "
         << iStart << " to " << iEnd << " is: " << iRet << "\n";

    return 0 ;
}