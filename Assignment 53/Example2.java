// 1. write java program which accept two arrays from user and display minimum element of each array.
//Input: 2 9 7 5 2 3 
//       9 3 5 5 
// output: 2 3 
//       
import java. util.*;

class MyArray
{
    public void MinArray(int Arr1[],int Arr2[])
    {
        int i = 0 , j = 0 ; 
        int Min1 = Arr1[0];
        int Min2 = Arr2[0];

        
        for ( i = 1; i < Arr1.length; i++)
         {
            if (Arr1[i] < Min1)
            {
                Min1 = Arr1[i];
            }
        }

        for ( j = 1; j < Arr2.length; j++) 
        {
            if (Arr2[j] <Min2) 
            {
                Min2 = Arr2[j];
            }
        }

        System.out.println("Minimum elements from each array:");
        System.out.println(Min1 + " " + Min2);
    }

}
 class Example2
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

        System.out.println("Enter elements of second array:\n");
         int j = 0;
        for (j = 0; j < size2; j++) 
        {
            Arr2[j] = sobj.nextInt();
        }

        MyArray obj = new MyArray();

         obj.MinArray(Arr1, Arr2);

     }
    
}