//5. write generic program to accept N values and reverse the contents.


#include<iostream>
using namespace std;

template<class T>

void Reverse( T *Arr, int iSize)
{
    int i=0;
    T temp=0;

    for (int i = 0; i < iSize / 2; i++) 
    {
    T temp = Arr[i];
    Arr[i] = Arr[iSize - 1 - i];
    Arr[iSize - 1 - i] = temp;
}
}

int main()
{ 
    int i=0;
 
    int Arr[]={10,20,30,10,20,30,40,10,40,10};

    for(i=0;i<9;i++)
    {
        cout<<Arr[i]<<"\n";
    }
     Reverse(Arr,9);

      cout<<"Reverse of the content:"<<"\n";
     for(i=0;i<9;i++)
     {
      
        cout<<Arr[i]<<"\n";
     }

    return 0;
}
