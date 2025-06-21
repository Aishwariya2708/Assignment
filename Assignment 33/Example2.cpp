/*2. write a program which accept two number from user and display position  of  common ON bits from that two
numbers*/

 

#include<iostream>
using namespace std;

typedef unsigned int UINT;
 
UINT CommonBits( UINT iNo1,UINT iNo2)
{
  UINT iCommon = iNo1 & iNo2;  
    int iLocation = 1;

    cout << "Common ON bit positions are: ";

    while(iCommon != 0)
    {
        if(iCommon & 1)  
        {
            cout << iLocation << " ";
        }

        iCommon = iCommon >> 1;
        iLocation++;
    }

    cout << "\n";
}
int main()
{
    UINT iValue1=0,iValue2=0;
    
    cout<<"Enter first number:\n";
    cin>>iValue1;
    
    cout<<"Enter second number:\n";
    cin>>iValue2;
    

CommonBits(iValue1,iValue2);
    return 0;
} 
