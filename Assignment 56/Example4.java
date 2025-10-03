/* 4. Write a java program which accept string and one character from user and remove that character from string.

Input: IndiaisDemoIndia 
       i
output: IndasDemoInda  
 */

import java.util.*;


class Example4
 {
    public static void main(String A[])
    {
        Scanner sobj= new Scanner(System.in);
    

       System.out.println("Enter string :");
       String Str= sobj.nextLine();
       
     System.out.println("Enter character to remove:");
        char ch = sobj.next().charAt(0);

        String iRet = "";

        int i = 0;
        for ( i = 0; i < Str.length(); i++) 
        {
            if (Str.charAt(i) != ch)
             {
                iRet+= Str.charAt(i); 
            }
        }

        System.out.println("Output: " + iRet);

        sobj.close();
    }
 }