//5. write generic program to accept N values from user and return Smallest values.

#include<iostream>
using namespace std;

template<class T>

T Min( T *Arr, int iSize)
{
   T iMin = Arr[0];

    for (int i = 1; i < iSize; i++)
    {
        if (Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
}

int main()
{ 
int iRet=0;

   int Arr[]={10,20,30,40,50};
   float Brr[]={10.0,3.7,9.8,8.7};

    iRet=Min(Arr,5);

    cout<<" smallest of integer array: \n"<<iRet<< endl;;
    
    float fRet=Min(Brr,4);

    cout<<"\n smallest of float array:"<<fRet<< endl;;

    return 0;
}