/* 2. Given an array Arr[] of n integers ,construct a product Array prod[] (of same size) such that prod[i] is
      equal to the product of all the elements of Arr[] except Arr[i].solve it without division opertor and in 
      O(n).

      Arr[]= {10,3,5,6,2}
      prod[]={180,600,360,300,900}
    */

import java.util.*;

class ProductArray
{
    void productArray(int Arr[],int  n)
    {
        int i = 0;
        int[] prod = new int[n];
        prod[0] = 1;
        int right = 1;

        for (i = 1; i < n; i++)
        {
            prod[i] = prod[i - 1] * Arr[i - 1];
        }

        for ( i = n - 1; i >= 0; i--)
         {
            prod[i] = prod[i] * right;
            right *= Arr[i];
        }

        for ( i = 0; i < n; i++)
         {
            System.out.print(prod[i] + " ");
        }
        System.out.println();
    }
}

    class Example2
    {
        public static void main(String  A [])
        {
            Scanner sobj = new Scanner(System.in);

            ProductArray pobj = new ProductArray();

            int Arr[]= {10,3,5,6,2};

            int n = Arr.length;

            System.out.println("The product of the Array is:\n");

            pobj.productArray(Arr,n);
            
            sobj.close();

        }
    }