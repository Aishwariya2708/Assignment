// 1. write java program which accept two arrays from user and display contents of each array .
//Input: 2 9 7 5 2 3 
//       9 3 5 5 
// output: 2 9 7 5 2 3 
//       9 3 5 5
import java. util.*;

class MyArray
{
    public void Display(int Arr1[],int Arr2[])
    {
        int i = 0;

        System.out.println("First Array:");
        for ( i = 0; i < Arr1.length; i++) 
        {
            System.out.print(Arr1[i] + " ");
        }
           int j = 0;
        System.out.println("\nSecond Array:");
        for ( j = 0; j < Arr2.length; j++) 
        {
            System.out.print(Arr2[j] + " ");
        }
    }
}
 class Example1 
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

        obj.Display(Arr1, Arr2);

     }
    
}