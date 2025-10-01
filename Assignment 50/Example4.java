/* 4. Write a java program which accept number of rows and number of columns from user and display below pattern.
 
Input:  iRow = 6   iCol = 6

Output:
         *  *   *  *  *   *
         *  #  #   #  *   *
         *  #  #   *  $   *
         *  #  *   $  $   * 
         *  *  $   $  $   * 
         *  *   *   *  *  *              
           
          
 */


 import java.util.*;

class DisplayPattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i= 0 ,j = 0;


        for( i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if (i == 1 || i == iRow || j == 1 || j == iCol)  
                {
                    System.out.print("*\t");
                }
                else if (i == j)   
                {
                    System.out.print("*\t");
                }
                else if (j == (iCol - i + 1))  
                {
                    System.out.print("*\t");
                }
                else if (j < i && j < (iCol - i + 1))   
                {
                    System.out.print("#\t");
                }
                else if (j > i && j > (iCol - i + 1))  
                {
                    System.out.print("$\t");
                }
                else   
                {
                    System.out.print("\t");
                }
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

        int iValue1 = 0, iValue2 = 0;

        System.out.print("Enter number of rows: ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter number of columns: ");
        iValue2 = sobj.nextInt();

        DisplayPattern dobj = new DisplayPattern();
        dobj.Pattern(iValue1, iValue2);
    }
}