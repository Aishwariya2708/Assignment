//1. write generic program to multiply two numbers.

#include<iostream>
using namespace std;

template<class T>

T Multiply( T no1,T no2)
{
     T ans= no1 * no2;
     return ans;
}

int main()
{
    int iRet=Multiply(10,20);
    cout << "Multiplication of integers: \n" << iRet;

    float fRet=Multiply(10.0f,20.0f);
  cout << "\n Multiplication of floats: \n" << fRet;

    return 0;
}