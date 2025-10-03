/* 4.java Program to read and add two distances using class.
    In this java program , we will read two distances in feet and inches and find their sum here program is
    implementing using class and objects concept.

    Given program is used to read two distances(in feet and inches)and print their sum in feet and inches ,note
    that if tota inches are more than 12 then it would be consider as 1 feet.

    Input:
    Enter first distance
    Enter Feet:20
    Enter inches:10
    Enter Second distance:
    Enter feet :20
    Enter inches:10

    Output:
    Total distance is :
    Feet:41
    Inches:8
*/

 import java.util.*;

   class Distance
 {
    int feet;
    int inches;

    
    void read(Scanner sobj) 
    {
        System.out.print("Enter feet: ");
        feet = sobj.nextInt();

        System.out.print("Enter inches: ");
        inches = sobj.nextInt();
    }

    
    Distance add(Distance dobj) 
    {
    
        this.feet = this.feet + dobj.feet;
        this.inches = this.inches + dobj.inches;

      
        if (this.inches >= 12) 
        {
           this.feet += this.inches / 12;

            this.inches = this.inches % 12;
        }

        return this;
    }
 }

class Example4
{
    public static void main(String  A[])
    {
        Scanner sobj = new Scanner(System.in);

        Distance dobj1 = new Distance();
        Distance dobj2 = new Distance();

        System.out.println("Enter first distance:");
        dobj1.read(sobj);

        System.out.println("Enter second distance:");
        dobj2.read(sobj);

        Distance total = dobj1.add(dobj2);

        System.out.println("Total distance is:");
        System.out.println("Feet: " + total.feet);
        System.out.println("Inches: " + total.inches);

    }
 }