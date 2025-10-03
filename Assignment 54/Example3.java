//3.Write a java program which accept array of characters from user and count number of capital characters.

//Input: b N j B R b A d G G  
//Output: 6

import java.util.*;

class MyArray
{
    public int  ArrayCapital(char Arr[])
    {
      int iCount = 0;
      int i = 0; 

        for ( i = 0; i < Arr.length; i++)
         {
            if (Arr[i] >= 'A' && Arr[i] <= 'Z') 
            {
                iCount++;
            }
        }

        return iCount;
      
    }
}



class Example3
{
    public static void main(String  A[] )
     {
        Scanner sobj = new Scanner(System.in);
    
       System.out.print("Enter the size of the array: ");
        int size = sobj.nextInt();

       char[] Arr = new char[size];

        System.out.println("Enter the characters of the array:");
        for (int i = 0; i < size; i++)
         {
            Arr[i] = sobj.next().charAt(0); 
        }

        MyArray mobj = new MyArray();

        int iRet = mobj.ArrayCapital(Arr);

        System.out.println("Number of capital characters: " + iRet);
    }
}
    