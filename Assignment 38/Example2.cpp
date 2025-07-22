//2. write generic program to find largest  numbers from three numbers.

#include<iostream>
using namespace std;

template<class T>

T Max( T no1,T no2,T no3)
{
  T Max = no1;

    if (no2 > Max)
    {
        Max = no2;
    }
    if (no3 > Max)
   {
        Max = no3;
   }
    return Max;
}

int main()
{ 
  int iRet=0;

   iRet = Max(19, 53, 90);
    cout << "Largest number are : " << iRet ;

    return 0;
}