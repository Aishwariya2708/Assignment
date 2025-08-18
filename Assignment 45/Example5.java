/* 5. write a program which accept matrix  and check whether the matrix is Sparse matrix or not.
Sparse matrix is a matrix with the majority of its elements equal to zero. 
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

 public boolean ChkSparse()
 {
    int i = 0, j= 0;
    int iZero = 0;
int itotal = 0;

for( i = 0; i < Arr.length; i++)
{
    itotal += Arr[i].length;  
    for( j = 0; j < Arr[i].length; j++)
    {
        if(Arr[i][j] == 0)
            iZero++;
    }
}
return iZero >= itotal / 2;
}    
}


class Example5
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

         bRet = mobj.ChkSparse();

        System.out.println(bRet);
    }
    
}
