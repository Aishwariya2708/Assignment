// 4. write java program which accept two arrays from user and from new array which is combination of contents
// of first and second  array .

//Input: 12 57 28 3 
//       99 23 54 58 6 67 

// output: 12 57 28 3 99 23 54 58 6 67 

import java. util.*;

class MyArray
{
    public int [] ArrayConcate(int Arr1[],int Arr2[] )
    {
          int iSize1 = Arr1.length;
        int iSize2 = Arr2.length;

        int Concate[] = new int[iSize1+ iSize2];
          
        int i = 0, j = 0;
        
        for ( i = 0; i < iSize1; i++)
        {
            Concate[i] = Arr1[i];
        }

        for (j = 0; j < iSize2; j++) 
        {
            Concate[iSize1 + j] = Arr2[j];
        }

        return Concate;
        
}
}
 class Example4
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
        int Combine[] = obj.ArrayConcate(Arr1, Arr2);


    System.out.println("Combined Array:");
  int a = 0;
   for (a  = 0; a < Combine.length; a++)
 {
    System.out.print(Combine[a] + " ");
 }



}
    
}