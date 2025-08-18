/* 3. write a program which accept matrix   and reverse the contents of each column.
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

  public  void ReverseCol()
    {
        int j = 0,iStart=0,iEnd=0 ;

    for( j = 0; j < Arr[0].length; j++)
    {
        iStart = 0;
         iEnd = Arr.length - 1;

        while(iStart < iEnd)
        {
            int temp = Arr[iStart][j];
            Arr[iStart][j] = Arr[iEnd][j];
            Arr[iEnd][j] = temp;

            iStart++;
            iEnd--;
        }
    }
}
}
    
class Example3
 {
    public static void main(String A [])
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iCol = sobj.nextInt();
        

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();

        mobj.Display();

       mobj.ReverseCol();

       System.out.println("Matrix after reversing each Column:");

       mobj.Display();
    }
    
}
