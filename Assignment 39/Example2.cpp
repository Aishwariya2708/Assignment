//2. write generic program to accept N values and count frequency of any specific value.


#include<iostream>
using namespace std;

template<class T>

int Frequency ( T *Arr, int iSize,T iNo)
{
    int iCount = 0;
    int i=0;
    
        for (i = 0; i < iSize; i++)
        {
            if (Arr[i] == iNo)
            {
                iCount++;
            }
        }
    
        return iCount;
}

int main()
{ 
    int iRet=0;
 
    int Arr[]={10,20,30,10,20,30,40,10,40,10};
     iRet=Frequency(Arr,9,10);

    cout<<"frequency of "<<iRet;

    return 0;
}
