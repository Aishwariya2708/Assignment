/* 3. Given an array A[],Write a function that segregates ven and odd numbers. The functions should put all even
      numbers first, and then odd numbers.

      Input: {12,34,45,9,8,90,3}
      Output: {12,34,8,90,45,9,3}
    */

import java.util.*;

class SegregateOddEven
{
    void segregateOddEven(int Arr[])
    {
        int iEven = 0, iOdd = Arr.length - 1;

        while (iEven < iOdd) 
        {
            while (Arr[iEven] % 2 == 0 && iEven < iOdd) 
            {
                iEven++;
            }

            while (Arr[iOdd] % 2 == 1 && iEven < iOdd)
             {
                iOdd--;
            }
            
            if (iEven <iOdd )
             {
                int temp = Arr[iEven];
                Arr[iEven] = Arr[iOdd];
                Arr[iOdd] = temp;

                iEven++;
                iOdd--;
            }
        }
        
    }
}

    class Example3
    {
        public static void main(String  A [])
        {
            Scanner sobj = new Scanner(System.in);

            SegregateOddEven Sobj = new SegregateOddEven ();

            int Arr[] = {12, 34, 45, 9, 8, 90, 3};

        Sobj.segregateOddEven(Arr);

        System.out.println("Array after segregation:");
        int i = 0;

        for (i = 0; i < Arr.length; i++)
         {
            System.out.print(Arr[i] + " ");
        }

        }
    }