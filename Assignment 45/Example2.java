/* 2. write a program which accept matrix   and reverse the contents of each row.
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

  public  void ReverseRow()
    {
        int i = 0,iStart=0,iEnd=0 ;

    for( i = 0; i < Arr.length; i++)
    {
        iStart = 0;
         iEnd = Arr[i].length - 1;

        while(iStart < iEnd)
        {
            int temp = Arr[i][iStart];
            Arr[i][iStart] = Arr[i][iEnd];
            Arr[i][iEnd] = temp;

            iStart++;
            iEnd--;
        }
    }
}

}
    

class Example2
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

       mobj.ReverseRow();

       System.out.println("Matrix after reversing each row:");

       mobj.Display();
    }
    
}
