/*2. Write java program which acept array of chracters from user and replacce each capital character with its correspoing 
small character.

Input: b N e B R b A i G i
output:  4
*/

import java.util.Scanner;

class MyArray
{
    public int ArrayCountVowels(char Arr[])
    {
        int i = 0 ;
         int iCount = 0;

        for ( i = 0; i < Arr.length; i++) 
        {
            if (Arr[i] >= 'A' && Arr[i] <= 'Z') 
            {
                Arr[i] = (char)(Arr[i] + 32); 
                iCount++;
            }
        }
        return iCount;

    }
}
  
class Example2
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
        int iRet =  0 ;
         iRet = mobj.ArrayCountVowels(Arr); 

        System.out.println(iRet); 
        }
    }


