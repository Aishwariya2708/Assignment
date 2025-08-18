// 3. write a program which accept matrix and return largest number from both  the diagonals.

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
    
    public int MaxDiagonal()
    {
        int i=0,iMax=0;
        int iSize=Arr.length;

        for(i = 0; i < iSize; i++)
        {
            
            if(Arr[i][i] > iMax)
            {
                iMax = Arr[i][i];
            }
        
            if(Arr[i][iSize - 1 - i] > iMax)
            {
                iMax = Arr[i][iSize - 1 - i];
            }
        }
 return iMax;
      }
}

class Example3
 {
    public static void main(String A [])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iCol = sobj.nextInt();
        
         if(iRow != iCol)
        {
            return;
        }

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();

        mobj.Display(); 

       iRet=mobj.MaxDiagonal();
        System.out.println("Largest of that numbers is : "+iRet);
       
      
    }
    
}
