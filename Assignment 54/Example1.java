//1.Write a java program which accept array from user and reverse each number of that array

//Input: 89 687 549 87 9 
//Output: 98  786 65 945 78 9 

import java.util.*;

class MyArray
{
    public void ReverseArray(int Arr[])
    {
     

      int i = 0;
      int iDigit = 0;


      for ( i = 0; i < Arr.length; i++) 
      {
             int iNum = Arr[i];
             int Reversed = 0;
    
            while (iNum != 0) 
            {
                 iDigit = iNum % 10;
                Reversed = Reversed * 10 + iDigit;
                iNum /= 10;
            }
            Arr[i] = Reversed;
        }
    }
}


class Example1
{
    public static void main(String  A[] )
     {
        Scanner sobj = new Scanner(System.in);
    
       System.out.print("Enter the size of the array: ");
        int size = sobj.nextInt();

        int[] Arr = new int[size];

        System.out.println("Enter the elements of the array:");

        for (int i = 0; i < size; i++)
         {
            Arr[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.ReverseArray(Arr);

        System.out.println("Array after reversing each number:");
        for (int  iNum : Arr)
        {
            System.out.print(iNum + " ");
        }
    }
}