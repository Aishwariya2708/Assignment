/* 4. Write java program to print below pattern. 
   
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *

*/


import java.util.*;

class PrintPattern
{
  public void Display(int iRow,int iCol)
  {
    int i=0,j=0 , k = 0;

    if(iRow !=iCol)
    {
      System.out.println("Invalid input");

      return;
    }
        
    for(i=1;i<=iRow;i++)
    {
      for(j=1;j<=i;j++)
      {
        System.out.print("* ");
      }
        for(k = 1; k <= 2 * (iRow - i); k++) 
        {
                System.out.print("  ");  
            }

            for( j = 1; j <= i; j++)
             {
                System.out.print("* ");
            }
      System.out.println();
    }
  }
}
        

class Example4
{
    public static void main(String A[])
    {
      Scanner sobj = new Scanner(System.in);

       int iValue1=0, iValue2=0 ;

          System.out.println("Enter number of Rows:");
          iValue1=sobj.nextInt();
         
          
          System.out.println("Enter number of Columns:");
          iValue2=sobj.nextInt();

         PrintPattern  pobj =  new PrintPattern();

          pobj.Display(iValue1, iValue2);
    }
  }


