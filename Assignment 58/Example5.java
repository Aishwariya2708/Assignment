/* 4. Write java Program to Transpose a Matrix.

*/

 import java.util.*;

    class TransposeMatrix
   {
    public static void main(String A [] )
     {
        int Row,Col;
        int i = 0 , j = 0; 

        Scanner sobj = new Scanner(System.in);

         System.out.println("Input number of Rows:\n");
         Row = sobj.nextInt();

         System.out.println("Input number of Col:\n");
         Col = sobj.nextInt();

        int[][] matrix = new int[Row][Col];
        int[][] transpose = new int[Col][Col];

        System.out.println("Enter elements of matrix:");

       
        for ( i = 0; i < Row; i++) 
        {
            for (j = 0; j < Col; j++) 
            {
                System.out.print("Element[" + (i + 1) + "," + (j + 1) + "]: ");
                matrix[i][j] = sobj.nextInt();
            }
        }

        for ( i = 0; i < Row; i++)
        {
            for ( j = 0; j < Col; j++) 
            {
                transpose[j][i] = matrix[i][j];
            }
        }

        System.out.println("Original matrix:");

        for ( i = 0; i < Row; i++) 
        {
            for ( j = 0; j < Col; j++)
             {
                System.out.print(matrix[i][j] + "\t");
            }
            System.out.println();
        }

       
        System.out.println("Transpose matrix:");

        for  (i = 0; i < Col; i++)
         {
            for ( j = 0; j <Row; j++)
             {
                System.out.print(transpose[i][j] + "\t");
            }
            System.out.println();
        }

        sobj.close();
    }
}