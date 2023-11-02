/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.*; 
public class bitwiseOp {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter a number");
        int n = sc.nextInt();
        int mult = n << 1;
        int div = n >> 1;
        System.out.println("Multiplication by 2: "+mult);
        System.out.println("Division by 2: "+div);
    }
}
