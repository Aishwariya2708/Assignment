/* 5. Pythagorean Triplet in array
    Given amn array of integers, write a function that returns true if there isa triplet (a,b,c) that satisfies 
    a2 + b2 = c2.

    Input: arr[] ={3,1,4,6,5}
    output: True
    there is a Pythagorean triplet (3,4,5).
    */

import java.util.*;

class PythagoreanTriplet
{
    static boolean isTriplet(int Arr[],int n)
    {
        int  i = 0, j = 0 , k = 0;

         for (i = 0; i < n; i++)
         {
             
            int a = Arr[i];

            for ( j = i + 1; j < n; j++) 
            {
                int b = Arr[j];

                for ( k = j + 1; k < n; k++) 
                {
                    int c = Arr[k];
                    
                    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) 
                    {
                        return true; 
                    }
                }
            }
        }

        return false; 
        
    }
}

    class Example5
    {
        public static void main(String  A [])
        {
            Scanner sobj = new Scanner(System.in);

            int Arr[]={3,1,4,6,5};
            int Arr_size = Arr.length;

            if (PythagoreanTriplet.isTriplet(Arr, Arr_size))
            {
            System.out.println("True");
           } 
          else 
        {
            System.out.println("false");
        }
       
        }
    }