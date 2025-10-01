// 5. write java program which accept two arrays from user and display summation of each array.

//Input: 2 9 7 5  2 3
//      9 3 5 5 

// output: 28 22  

import java. util.*;

class MyArray
{
    public int  SumArray (int Arr[] )
    {
        int iSum = 0;
        int i = 0 ;

         for ( i = 0; i < Arr.length; i++) 
         {
           iSum+= Arr[i];
        }
        return iSum;
    }
}
 class Example5
 {
     public static void main (String A [])
     {
        Scanner sobj=new Scanner(System.in);

        System.out.print("Enter size of first array: ");

        int size1 = sobj.nextInt();
        int Arr1[] = new int[size1];

        System.out.println("Enter elements of first array:");
        int i = 0;
        for (i = 0; i < size1; i++)
         {
            Arr1[i] = sobj.nextInt();
        }

        System.out.print("Enter size of second array: ");

        int size2 = sobj.nextInt();
        int Arr2[] = new int[size2];

        System.out.println("Enter elements of second array:");
         int j = 0;
        for (j = 0; j < size2; j++) 
        {
            Arr2[j] = sobj.nextInt();
        }

        MyArray obj = new MyArray();

        int iSum1 = obj.SumArray(Arr1);
        int iSum2 = obj.SumArray(Arr2);

        
        System.out.println("Sum of first array: " + iSum1);
        System.out.println("Sum of second array: " + iSum2);

}
    
}