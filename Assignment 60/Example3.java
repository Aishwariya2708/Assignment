// 3. Write java program which print Fibonacci Series.


import java.util.*;

class  Example3
{
  public static void main(String[] args)
  {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the number :");

    int n = sobj.nextInt();

    int a = 0, b = 1;

    System.out.println("Fibonacci Series:");

    for (int i = 1; i <= n; i++)   
    { 
      System.out.print(a + " ");

      int next = a + b;
      a = b;
      b = next;
    }

    sobj.close();
  }
}

