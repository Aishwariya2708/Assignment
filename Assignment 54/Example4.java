//4.Write a java program which accept marks of N students from user and display class of each student.

/*  Less than 35 - Fail
    Less than 50  - Pass class
    Less than 60 - Second Class
    Less than 70 - First class
    Greater than 70 - First class with distinction

Input: 67.3  45.8  88.9  77.5  55.2 
Output:  67.3  First class
        45.8 Pass class
        88.9  First class with Distinction
        77.5  First class with Distinction
        55.2  Second class
*/

import java.util.*;

class MyArray
{
    public void Percentage(float Arr[])
    {
        int i = 0 ;
        for ( i = 0; i < Arr.length; i++)
         {
            float marks = Arr[i];
            System.out.print(marks + "  ");

            if (marks < 35) 
            {
                System.out.println("Fail");
            } 
            else if (marks < 50) 
            {
                System.out.println("Pass Class");
            } 
            else if (marks < 60) 
            {
                System.out.println("Second Class");
            } 
            else if (marks < 70)
             {
                System.out.println("First Class");
            } 
            else 
            {
                System.out.println("First Class with Distinction");
            }
        }
    } 
      
    }




class Example4
{
    public static void main(String  A[] )
     {
        Scanner sobj = new Scanner(System.in);
    
       System.out.print("Enter the size of the array: ");
        int size = sobj.nextInt();

       float[] Arr = new float[size];

        System.out.println("Enter the marks of " + size + " students:");

        for (int i = 0; i < size; i++)
        {
            Arr[i] = sobj.nextFloat();
        }

        MyArray mobj = new MyArray();

        System.out.println("\nStudent Results are :");
        mobj.Percentage(Arr);
    }
}
    