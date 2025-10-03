/* 2. Program to check given strings are Anagram or not This java program will read two strings and check 
whether they are anagram strings or not . 
*/

 import java.util.*;

 class AnagramString
 {
    static boolean isAnagrams(String Str1,String Str2)
    {
         Str1 = Str1.toLowerCase();
         Str2 = Str2.toLowerCase();

       
        if (Str1.length() != Str2.length())
         {
            return false;
        }

        char[] ch1 = Str1.toCharArray();
        char[] ch2 = Str2.toCharArray();

        Arrays.sort(ch1);
        Arrays.sort(ch2);

        return Arrays.equals(ch1, ch2);
    }
}

class Example2
{
    public static void main(String  A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String1: \n");
        String Str1 = sobj.next();

        System.out.println("Enter String2: \n");
        String Str2 = sobj.next();

        if(AnagramString.isAnagrams(Str1,Str2))
        {
            System.out.println("Anagram Strings !!");
        }
        else
        {
            System.out.println("String is not Anagram !!");
        }
    }
 }