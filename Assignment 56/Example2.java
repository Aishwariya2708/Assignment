/* 2. Write a java program which accept  string from user and print frequency of each word.

Input: India is Demo India Hello Demo
output: India  2
        is     1
        Demo   2 
        Hello 1
 */

import java.util.*;


class Example2
 {
    public static void main(String A[])
    {
        Scanner sobj= new Scanner(System.in);
    

       System.out.println("Enter string :");
       String Str= sobj.nextLine();
       
           String[] words = Str.split(" ");  

           int i = 0 ;

        for ( i = 0; i < words.length; i++) 
        {
            
            if (words[i].equals(""))
             {
                continue;
            }

            int iCount = 1 , j = 0;

            for ( j = i + 1; j < words.length; j++) 
            {
                if (words[i].equals(words[j]))
                 {
                    iCount++;
                    words[j] = "";  
                }
            }

            System.out.println(words[i] + " " + iCount);
        }

        sobj.close();
    }
 }