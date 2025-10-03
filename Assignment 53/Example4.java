// 4. write java program which accept two arrays from user and copy the contents of that array into another array
//and return new array.
      
import java. util.*;

class MyArray
{
    public int[] CopyArray(int Arr[])
    {
        int iSize = Arr.length;
       int[] copiedArr = new int[iSize];

      for (int i = 0; i < iSize; i++) 
      {
       copiedArr[i] = Arr[i];
     }

    return copiedArr;
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

        System.out.println("Enter elements of second array:\n");
         int j = 0;
        for (j = 0; j < size2; j++) 
        {
            Arr2[j] = sobj.nextInt();
        }

        MyArray obj = new MyArray();
          
      int[] copyArr1 = obj.CopyArray(Arr1);
        int[] copyArr2 = obj.CopyArray(Arr2);


        System.out.println("Copied first array:");
         
      for ( i = 0; i < copyArr1.length; i++) 
      {
         System.out.print(copyArr1[i] + " ");
     }
      System.out.println();

     System.out.println("Copied second array:");
     for ( i = 0; i < copyArr2.length; i++) 
    {
       System.out.print(copyArr2[i] + " ");
    }
    System.out.println();

     }
    
}