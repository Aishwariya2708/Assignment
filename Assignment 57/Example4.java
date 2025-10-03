/* 4. Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the
 sum of elements at higher indexes. for Example,in an array A:

 A[0] = -7 , A[1] = 1, A[2]= 5 , A[3]= 2, A[4]= -4,A[5]= 3,A[6]= 0
 3 is an equilibrium index,because:

 A[0]+A[1]+A[2]=A[4]+A[5]+A[6]
 6 is also an equlibrium index,because sum of zero elements us zero ,i.e, 
 A[0]+A[1]+A[2]=A[4]+A[5]=0

 7 is not an Equilibrium index ,because it is not a valid index of Array A

 Write a function int Equlibrium (int []Arr,int n); that given a sequence Arr[]of size n, returns an equilibrium
 index(if Any)or -1
if no equlibrium indexes exits.
    */

import java.util.*;

class Equilibrium
{
    int equilibrium(int Arr[],int n)
    {
        int iSum = 0;
        int Sum = 0;
        int i = 0 ;

        for ( i = 0; i < n; i++) 
        {
            iSum += Arr[i];
        }

        for ( i = 0; i < n; i++) 
        {
            iSum -= Arr[i]; // totalSum is now right sum

            if (Sum == iSum)
             {
                return i;
            }

            Sum += Arr[i];
        }

        return -1;
        
          
    }
}

    class Example4
    {
        public static void main(String  A [])
        {
            Scanner sobj = new Scanner(System.in);

            Equilibrium eobj = new Equilibrium ();

            int Arr[] = {-7,1,5,2,-4,3,0};
         int Arr_size= Arr.length;

        System.out.println("First equlibrium  index is"+eobj.equilibrium(Arr, Arr_size));
       
        }
    }