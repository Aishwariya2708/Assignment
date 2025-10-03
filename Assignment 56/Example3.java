/* 3. Write a java program which accept string from user and display such a word which occurs maximum number of
 times

Input: India is Demo India Hello Demo India
output: India  
 */

import java.util.*;

 class Frequency
 {
    public String MaxFrequency(String Str)
     {
        String[] words = Str.split(" ");  
        
        int iMax = 0;       
        String iMaxWord = "";  

        for (int i = 0; i < words.length; i++)
        {
            if (words[i].equals(""))
             {
                continue;  
            }

            int iCount = 1;   

            
            for (int j = i + 1; j < words.length; j++)
             {
                if (words[i].equals(words[j]))
                 {
                    iCount++;
                    words[j] = "";  
                }
            }

           
            if (iCount > iMax) 
            {
                iMax = iCount;    
                iMaxWord = words[i];  
            }
        }

        return iMaxWord;   
    }
}

class Example3
 {
    public static void main(String A[])
    {
        Scanner sobj= new Scanner(System.in);
    

       System.out.println("Enter string :");
       String Str= sobj.nextLine();
       
        Frequency fobj = new Frequency();
        String iMaxWord = fobj.MaxFrequency(Str);

        System.out.println(" maximum frequency of Word is : " + iMaxWord);

        sobj.close();
    }
 }