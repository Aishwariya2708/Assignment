/*3. Write java program which acept array of chracters from user and accept one character. Return occurrence of
 that character without considering case.

Input: b N e B R b A i G i B b
output:  4
*/

import java.util.*;

class MyArray
{
    public int Search(char Arr[],char ch )
    {
        int i = 0 ;
         int iCount = 0;
         ch = Character.toLowerCase(ch);

        for (i = 0; i < Arr.length; i++)
        {
    if (Character.toLowerCase(Arr[i]) == ch)
     {
                iCount++;
            }
        }

        return iCount;


    }
}
  
class Example3
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

       System.out.print("Enter character to search: ");
        char ch = sobj.next().charAt(0);

        MyArray mobj = new MyArray();
        int iRet = 0;
         iRet = mobj.Search(Arr, ch);

        System.out.println(iRet); 
        }
    }


