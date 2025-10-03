 /*5. Write java program which acept array from user and display below pattern.

Input:  8 9 7 6 4 2 4

output:  * * * * * * * * 
         * * * * * * * * *
         * * * * * * *
         * * * * * *
         *  * * *
         * * 
         * * * *
*/

import java.util.*;

class MyArray
{
    public  void Pattern(int  Arr[] )
    {
        int i = 0 , j = 0;

        for (i = 0; i < Arr.length; i++)
         {
            for ( j = 0; j < Arr[i]; j++) 
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
  
class Example5
{
    public static void main(String  A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of Element: ");
        int size = sobj.nextInt();
        int Arr[] = new int[size];

         System.out.println("Enter the elements:");
        for (int i = 0; i < size; i++)
         {
            Arr[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        
        mobj.Pattern(Arr);
    }
}


