/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.*; 
public class expressions {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int a,b;
        System.out.println("Enter two numbers");
        a = sc.nextInt();
        b = sc.nextInt();
        
        int o1 = (a << 2) + (b >> 2);
        boolean o2 = (b > 0);
        int o3 = (a + b*100)/10;
        int o4 = a&b;
        
        System.out.println("(a << 2) + (b >> 2): "+o1);
        System.out.println("(b > 0): "+o2);
        System.out.println("(a + b*100)/10: "+o3);
        System.out.println("a&b: "+o4);
    }
}
