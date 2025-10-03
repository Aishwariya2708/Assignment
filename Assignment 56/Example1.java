/* 1. Write a java program which accept two string from user and check whether first string is the ritation of 
second string or not.

Input: abcdefg   cdefgab 
output: True
 */

import java.util.*;

class MyString
{
    public boolean Rotation(String Str1, String Str2)
     {
        if (Str1.length() != Str2.length())
         {
            return false;
        }
        String temp = Str1 + Str1;
        return temp.contains(Str2);
    }
}


class Example1
 {
    public static void main(String A[])
    {
        Scanner sobj= new Scanner(System.in);
        
       System.out.println("Enter string :");
       String Str1= sobj.nextLine();
       
        System.out.println("Enter second string:");
        String Str2 = sobj.nextLine();

     MyString obj = new MyString();

        boolean bRet = false; 
         bRet = obj.Rotation(Str1, Str2);

        System.out.println("the Rotation of String is :"  + bRet);

        sobj.close();
    }
 }