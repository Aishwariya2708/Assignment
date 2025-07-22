//4. write generic program to accept N values from user and return largest values.

#include<iostream>
using namespace std;

template<class T>

T Max( T *Arr, int iSize)
{
   T iMax = Arr[0];

    for (int i = 1; i < iSize; i++)
    {
        if (Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
}

int main()
{ 
int iRet=0;

   int Arr[]={10,20,30,40,50};
   float Brr[]={10.0,3.7,9.8,8.7};

    iRet=Max(Arr,5);

    cout<<" Max of integer array: \n"<<iRet<< endl;;
    
    float fRet=Max(Brr,4);

    cout<<"\n Max of float array:"<<fRet<< endl;;

    return 0;
}