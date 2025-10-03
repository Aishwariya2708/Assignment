/* 3.java Program to input a string from user and reverse each word of given string . 
*/

 import java.util.*;

 class ReverseEachWord
 {
    String reverseWord(String inputString)
    {
        int i = 0;

        String[] words = inputString.split(" ");
        String result = "";

        for (String word : words) 
        {
            String rev = "";

            for (i = word.length() - 1; i >= 0; i--)
             {
                rev += word.charAt(i);
            }

          result += rev + " ";
        }

        return result.trim(); 
         
    }
}

class Example3
{
    public static void main(String  A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String: \n");
        String Str = sobj.nextLine();
     
        System .out.println("Input String: " +Str);

         ReverseEachWord obj = new ReverseEachWord();

           String reversed = obj.reverseWord(Str);

        System.out.println("String with Reverse word: "+reversed);
    }
 }