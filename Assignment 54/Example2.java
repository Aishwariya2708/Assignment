//2.Write a java program which accept array from user and replace each member with summation of its digit.

//Input: 89 687 549 87 9 
//Output: 17 21 11 18 15 9 

import java.util.*;

class MyArray
{
    public void SumArray(int Arr[])
    {
     
     for (int i = 0; i < Arr.length; i++)
      {
            int iNum = Arr[i];
            int iSum = 0;

            while (iNum != 0)
             {
                int iDigit = iNum % 10;
                iSum = iSum + iDigit;
                iNum /= 10;
            }

           Arr[i] = iSum; 
        }
    }
}


class Example2
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
        mobj.SumArray(Arr);

        System.out.println("Array after Summation of its digit :");
        for (int  iNum : Arr)
        {
            System.out.print(iNum + " ");
        }
    }
}