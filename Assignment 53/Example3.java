// 3. write java program which accept two arrays from user and copy the contents of that array into another array
// in reverse order and return new array.
      
import java. util.*;

class MyArray
{
    public int[] CopyArrayRev(int Arr[])
    {
        int iSize = Arr.length;
       int[] RevArr = new int[iSize];

      for (int i = 0; i < iSize; i++) 
      {
       RevArr[i] = Arr[iSize - 1 - i];
       }

    return RevArr;
    }
}

 class Example3
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
          
      int[] revArr1 = obj.CopyArrayRev(Arr1);
        int[] revArr2 = obj.CopyArrayRev(Arr2);


        System.out.println("Reversed first array:");
         
      for ( i = 0; i < revArr1.length; i++) 
      {
         System.out.print(revArr1[i] + " ");
     }
      System.out.println();

     System.out.println("Reversed second array:");
     for ( i = 0; i < revArr2.length; i++) 
    {
       System.out.print(revArr2[i] + " ");
    }
    System.out.println();


     }
    
}