/* 4. write a program which accept matrix  and check whether the matrix is identify matrix or not.
Identify matrix is a square matrix with 1's along the digonal from upper left to lower right and 0's in all 
other positions.
If it satisfies the structure as explained before then the matrix is called as identify matrix.

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
        System.out.println("Elements of the matrix are : ");

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

 public boolean ChkIdentity()
 {
      int i = 0 , j= 0;

     if(Arr.length != Arr[0].length)
        {
            return false;  
        }

        for( i = 0; i < Arr.length; i++)
        {
            for( j = 0; j < Arr[i].length; j++)
            {
                if(i == j && Arr[i][j] != 1)
                {  
                    return false;
                }
                else if(i != j && Arr[i][j] != 0) 
                {
                    return false;
                }
            }
        }

        return true;
    }
 }

    
class Example4
 {
    public static void main(String A [])
    {
         boolean bRet = true;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iCol = sobj.nextInt();
        

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();

        mobj.Display();

         bRet = mobj.ChkIdentity();

        if(bRet)
        {
            System.out.println("It is an Identity Matrix.");
        }
        else
        {
            System.out.println("It is NOT an Identity Matrix.");
        }
    }
    
}
