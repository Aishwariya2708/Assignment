//3. write generic program to accept N values from user and return addition of that values.

#include<iostream>
using namespace std;

template<class T>

T AddN( T *Arr, int iSize)
{
  T iSum=0;
  int i=0;
  
  for(i=0;i<iSize;i++)
  {
    iSum=iSum+Arr[i];
  }
  return iSum;
}

int main()
{ 


   int Arr[]={10,20,30,40,50};
   float Brr[]={10.0,3.7,9.8,8.7};

   int iSum=AddN(Arr,5);

   
    cout << "Sum of int array:\n " << iSum;

    float fSum = AddN(Brr, 4);
  cout << "\nSum of float array: \n"<< fSum;

    return 0;
}