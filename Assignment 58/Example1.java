/* 1. java program to print pyramjid of characters using class
   
Input: 5
       
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
  

*/

 import java.util.*;

 class Pattern2
 {
    private int num;

    public void setNum(int num)
    {
        this.num = num;
    }
    public int getNum()
    {
        return this.num;
    }

     public void inputNum()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number:");

        int num = sobj.nextInt();

    setNum(num);
    }
    public void printAnswer()
    {
         int n = getNum();
         int i = 0;
         int j = 0 ;
         int s = 0;


        for ( i = 1; i <= n; i++) 
        {
            
            for ( s = 1; s <= n - i; s++) 
            {
                System.out.print("  ");
            }

          
            char ch = 'A';
            for ( j = 1; j <= i; j++) 
            {
                System.out.print(ch + " ");
                ch++;
            }

            ch -= 2;  
            for ( j = 1; j < i; j++) 
            {
                System.out.print(ch + " ");
                ch--;
            }

            System.out.println();
        }
    }

    public static void main(String  A[])
    {
        Pattern2 obj = new Pattern2();

        obj.inputNum();
        obj.printAnswer();
    }
 }