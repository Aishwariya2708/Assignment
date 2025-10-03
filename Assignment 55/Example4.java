 /*4. Write java program which acept array of characters from user and return diffrence between frequency of
  capital and frequency of small characters. 

Input: b N e B R b A I O  G i 
output:  3(7- 4)
*/

import java.util.*;

class MyArray
{
    public int[] Difference(char Arr[] )
    {
        int i = 0 ;
        int iCountCapital = 0;
        int iCountSmall = 0;

    for ( i = 0; i < Arr.length; i++) 
    {
    if (Arr[i] >= 'A' && Arr[i] <= 'Z') 
    {
        iCountCapital++;
    }
    else if (Arr[i] >= 'a' && Arr[i] <= 'z')
    {
        iCountSmall++;
    }
}

     return new int[]{iCountCapital, iCountSmall};
}
}
  
class Example4
{
    public static void main(String  A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of characters: ");
        int size = sobj.nextInt();
        char Arr[] = new char[size];

        System.out.println("Enter the characters:");
        for (int i = 0; i < size; i++) 
        {
            Arr[i] = sobj.next().charAt(0);
        }

        MyArray mobj = new MyArray();
          int[] counts = mobj.Difference(Arr);

        int diff = counts[0] - counts[1];

        System.out.println(diff + " (" + counts[0] + " - " + counts[1] + ")");
    }
}


