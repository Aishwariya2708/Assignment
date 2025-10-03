/*1. Write java program to print below pattern.
    
* * * * * * * * * *
* * * *  * * * *
* * *    * * *
* *      * *
*        *   
*        *
* *      * *
* * *    * * *
* * * *  * * * *
* * * * * * * * * *


*/

import java.util.*;


class PrintPattern
 {
  public void Display(int size)
  {
    int i = 0 , j = 0;

    for (i = 1; i <= size / 2; i++) 
    {
      for (j = 1; j <= size; j++)
      {
        if (j <= size / 2 - i + 1 || j > size - (size / 2 - i + 1)) 
        {
          System.out.print("* ");
        } 
        else 
        {
          System.out.print("  ");
        }
      }
        System.out.println();
    }

     for (i = 1; i <= size / 2; i++)
    {
      for (j = 1; j <= size; j++) 
      {
        if (j <= i || j > size - i) 
        {
          System.out.print("* ");
        } 
        else 
        {
          System.out.print("  ");
        }
      }
      System.out.println();
    }
  }
}

 class Example1 
{
    public static void main(String[] args)
     {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter size  ");

        iValue = sobj.nextInt();

        if (iValue % 2 != 0)
         {
    
            return;
        }

        PrintPattern pobj = new PrintPattern();

        pobj.Display(iValue);
    }
}
