/* 5. Write a java program which accept number of rows and number of columns from user and display below pattern.
 
Input:  iRow = 4   iCol = 4

Output:
        1  2  3  4   5
        1  2         5
        1     3      5
        1        4   5
        1  2  3  4   5
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
                if (i == 1 || i == iRow  || j == 1 || j == iCol + 1)  
                {
                    System.out.print(j+ "\t");
                }
                else if (i == j)   
                {
                    System.out.print(j+ "\t");
                }
            
                else   
                {
                    System.out.print(" \t");
                }
            }
            System.out.println();
        }
    }
}


class Example5
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