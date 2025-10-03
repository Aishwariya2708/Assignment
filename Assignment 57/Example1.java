/* 1. write a java program to find Maximum difference between two elements such that larger element appears after 
    the smaller number.
 
    Example: 
    If array is [2,3,10,6,4,8,1]then returned value should be 8(Diff between 10 and 2).

    If array is [7,9,5,6,3,2]the returned value should be 2(Diff between 7 and 9 ).
    */

import java.util.*;

class MaximumDifference
{
    int MaxDiff(int Arr[],int  size)
    {
            int i = 0;

        if (size < 2) 
        {
            System.out.println("Array should have at least two elements.");

            return 0;
        }

        int MinElement = Arr[0];
        int MaxDiff = Arr[1] - Arr[0];

        for ( i = 1; i < size; i++) 
        {
            if (Arr[i] - MinElement > MaxDiff) 
            {
                MaxDiff = Arr[i] - MinElement;
            }

            if (Arr[i] < MinElement) 
            {
                MinElement = Arr[i];
            }
        }

        return MaxDiff;

    }
}

    class Example1
    {
        public static void main(String  A [])
        {
            Scanner sobj = new Scanner(System.in);

            MaximumDifference Mobj = new MaximumDifference();

            int Arr[]= {1,2,90,10,110};

            System.out.println("Maximum diffrence is:\n"+Mobj.MaxDiff(Arr, 5));

            sobj.close();

        }
    }