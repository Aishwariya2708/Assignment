// 5. write java program which accept two arrays from user and check whether that array and its elements are
//pallindrome or not .

import java. util.*;

class MyArray
{
    public boolean ChkPallindrome(int Arr[])
    {
        int iStart = 0;
        int iEnd = Arr.length - 1;

        while (iStart < iEnd) 
        {
            if (Arr[iStart] != Arr[iEnd]) 
            {
                return false;
            }
            iStart++;
            iEnd--;
        }
        return true;
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

        System.out.println("Enter elements of second array:\n");
         int j = 0;
        for (j = 0; j < size2; j++) 
        {
            Arr2[j] = sobj.nextInt();
        }

          MyArray obj = new MyArray();

           if (obj.ChkPallindrome(Arr1))
          {
            System.out.println("First array is a Palindrome.");
          }
         else 
         {
            System.out.println("First array is NOT a Palindrome.");
          }

        if (obj.ChkPallindrome(Arr2)) 
        {
            System.out.println("Second array is a Palindrome.");
        } 
        else
        {
            System.out.println("Second array is NOT a Palindrome.");
        }
        sobj.close();
    }
      }
    
