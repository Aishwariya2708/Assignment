/*1. Write java program which acept array of chracters from user and replacce each capital character with its correspoing 
small character.

Input: b N j B R b A d G G 
output: b n j b r a d g g 
*/

import java.util.Scanner;

class MyArray
{
    public void ArrayReplace(char Arr[])
    {
        int i = 0 ;
        for ( i = 0; i < Arr.length; i++) 
        {
            if (Arr[i] >= 'A' && Arr[i] <= 'Z') 
            {
                Arr[i] = (char)(Arr[i] + 32); 
            }
        }

    }
}

class Example1
{
    public static void main(String  A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of characters: ");
        int size = sobj.nextInt();
        char Arr[] = new char[size];

        System.out.println("Enter the characters:");
        for (int i = 0; i < size; i++) 
        {
            Arr[i] = sobj.next().charAt(0);
        }

        MyArray mobj = new MyArray();
        mobj.ArrayReplace(Arr);

        System.out.println("Modified characters:");
        for (int i = 0; i < Arr.length; i++) 
        {
            System.out.print(Arr[i] + " ");
        }
    }

}
