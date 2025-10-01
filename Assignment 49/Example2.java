/*2.write Java program which accept string from user and display below pattern
 Input: Hello
output:     H  e  l  l  o
            H  e  l  l  * 
            H  e  l  *  * 
            H  e  *  *  * 
            H  *  *  *  *
*/

import java.util.Scanner;


class Pattern
{
    public void DisplayPattern(String str)
    {
        int iLength = str.length() ;
        int i = 0;
        int j = 0;

        
        for( i = 0; i < iLength; i++)
        {
           
            for( j = 0; j < iLength; j++)
            {
                if(j < iLength - i)    
                {
                    System.out.print(str.charAt(j) + "  ");
                }
                else   
                {
                    System.out.print("*  ");
                }
            }
            System.out.println();
        }

    }
}
class Example2
{
    public static void main(String A []) 
    {
        Scanner sobj = new Scanner(System.in);   
        
        System.out.print("Enter a string: ");

        String str = sobj.nextLine();

        Pattern pobj = new Pattern();
       
        pobj.DisplayPattern(str);
    }
}