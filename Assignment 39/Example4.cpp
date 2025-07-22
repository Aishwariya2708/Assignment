//4. write generic program to accept N values and search last  occurance  of any specific value.


#include<iostream>
using namespace std;

template<class T>

int SearchLast( T *Arr, int iSize,T iNo)
{
    int i=0;

    for (int i = iSize - 1; i >= 0; i--)
    {
       if (Arr[i] == iNo)
        {
            return i;
        }
    }
    return -1;  
   
}

int main()
{ 
    int iRet=0;
    int iValue=0;
 
    int Arr[]={10,20,30,10,20,30,40,10,40,10};

     iRet=SearchLast(Arr,10,40);

     cout<<"value to be search:"<<40<<endl;

       cout<<"Last occurance is :"<<iRet<<endl;

   
    return 0;
}
