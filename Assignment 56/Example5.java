/* 5. Write a java program which accept expression from user.check whether the expression is balanced parenthesised
     or not(Expression shoud contains only circular brackets.)

Input: (a+(f-g)*2(a-d))
output: True  
 */

import java.util.*;
 
class MyString
 {
    public boolean  BalancedParentheses(String expression)
     {
        int iCount = 0 , i = 0 ;

        for (i = 0; i < expression.length(); i++) 
        {
            char ch = expression.charAt(i);

            if (ch == '(')
             {
                iCount++;          
            } 
            else if (ch == ')')
             {
                iCount--;          
                
                if (iCount < 0) 
                {
                    return false;
                }
            }
        }

        return iCount == 0; 
    }
}


class Example5
 {
    public static void main(String A[])
    {
        Scanner sobj= new Scanner(System.in);
    

       System.out.println("Enter string :");
       String Str= sobj.nextLine();
       
     
       MyString mobj = new MyString();
       boolean bRet = false; 

       bRet = mobj.BalancedParentheses(Str);

        System.out.println("Balanced parentheses is : " +bRet);

        sobj.close();
    }
 }