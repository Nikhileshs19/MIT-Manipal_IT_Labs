/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */
class IntWrapper {
   public int a;
   public IntWrapper(int a){ this.a = a;}
}

public class swap {
    public static void main(String[] args){
      int a1 = 30;
      int b1 = 45;
      System.out.println("Before swapping, a = " + a1 + " and b = " + b1);
      swapFunction(a1, b1);
      System.out.println("**Now, Before and After swapping by values will be same here**:");
      System.out.println("After swapping by value, a = " + a1 + " and b is " + b1);
      
      IntWrapper a = new IntWrapper(30);
      IntWrapper b = new IntWrapper(45);
      System.out.println();
      System.out.println("Before swapping, a = " + a.a + " and b = " + b.a);
      swapRFunction(a, b);
      System.out.println("**Now, Before and After swapping values will be different here**:");
      System.out.println("After swapping, a = " + a.a + " and b is " + b.a);
   }
    
   public static void swapFunction(int a, int b) {
      System.out.println("Before swapping(Inside), a = " + a + " b = " + b);
      int c = a;
      a = b;
      b = c;
      System.out.println("After swapping(Inside), a = " + a + " b = " + b);
   }
   
   public static void swapRFunction(IntWrapper a, IntWrapper b) {
      System.out.println("Before swapping(Inside), a = " + a.a + " b = " + b.a);
      // Swap n1 with n2
      IntWrapper c = new IntWrapper(a.a);
      a.a = b.a;
      b.a = c.a;
      System.out.println("After swapping(Inside) by reference, a = " + a.a + " b = " + b.a);
   }
}
