//1. write generic program to accept one value and number from user.Print that  value that number
// of times on screen.

#include<iostream>
using namespace std;

template<class T>

void Display ( T value, int iSize)
{
    int i=0;

    for (i = 0; i < iSize; i++)
    {
        cout << value << " ";
    }
}

int main()
{ 
    int iValue=0;
    char cValue=0;
  
    cout << "Enter a character: ";
    cin >> cValue;

    cout << "Enter how many times to display it: ";
    cin >> iValue;

    Display(cValue,iValue);
//Display('M',7);
//Display(11,13);
//Display(3.7,6);

    return 0;
}
