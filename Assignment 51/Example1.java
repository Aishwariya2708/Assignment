/* 1. Write a java program which accept Matrix from user and swap the contents of each consecutive rows. */

import java.util.*;

class Matrix
{
    private int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int [A][B];
    }

    public void Accept()
    {
        System.out.println("Please enter the elements of matrix");

        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {

        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public void SwapRows() 
    {
        int i = 0, j = 0 , temp = 0;
    for (i = 0; i < Arr.length - 1; i += 2) 
    {
        for (j = 0; j < Arr[i].length; j++) 
        {
             temp = Arr[i][j];

            Arr[i][j] = Arr[i + 1][j];  

            Arr[i + 1][j] = temp;              
        }
    }
}

}
class Example1
{
    public static void main(String A[] )
     {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iCol = sobj.nextInt();
        
        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();

         System.out.println("Elements of the matrix are : ");
        mobj.Display();  

        mobj.SwapRows();

        System.out.println("\nMatrix After Swapping Consecutive Rows:");

        mobj.Display();
        
    }
}