/* 4. Write a java program which accept Matrix from user and trace and normal of given matrix .
    Here trace of the matrix is the sum of the elements of the main diagonal i.e. the diagonal from the upper
    left to the lower right of a matrix. Normal of the matrix is the square root of the sum of all the elements.
 */

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

    public int Trace() 
    {
      int trace = 0 , i = 0 ;


    if (Arr.length == Arr[0].length) 
    {
        for (i = 0; i < Arr.length; i++)
         {
            trace += Arr[i][i];
        }
    }

    return trace;
}

public double Normal()
 {
    int iSum = 0 , i = 0 , j = 0;

    for (i = 0; i < Arr.length; i++) 
    {
        for (j = 0; j < Arr[i].length; j++)
         {
            iSum += Arr[i][j] * Arr[i][j];
        }
    }
    return Math.sqrt(iSum);
 }
    
}

class Example4
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

int trace = mobj.Trace();
double normal = mobj.Normal();

System.out.println("Trace of matrix: " + trace);
System.out.println("Normal of matrix: " + normal);

    }
}