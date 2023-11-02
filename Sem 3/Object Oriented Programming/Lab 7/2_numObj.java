/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */
public class numObj {
    static int noOfObjects = 0;
  
    // Instead of performing increment in the constructor
    // instance block is preferred to make this program generic.
    {
        noOfObjects += 1;
    }
  
    // various types of constructors
    // that can create objects
    public numObj()
    {
    }
    public numObj(int n)
    {
    }
    public numObj(String s)
    {
    }
  
    public static void main(String args[])
    {
        numObj t1 = new numObj();
        numObj t2 = new numObj(5);
        numObj t3 = new numObj("GFG");
        numObj t[] = new numObj[3];
        numObj t4 = new numObj();
        numObj t5 = new numObj();
        numObj t6 = new numObj();
  
        System.out.println("Number of objects: "+numObj.noOfObjects);
    }
}