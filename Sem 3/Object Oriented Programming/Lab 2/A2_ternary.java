/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.*; 
public class ternary {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int a,b,c;
        System.out.println("Enter three numbers");
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        int max,min;
        int temp=a<b?a:b; 
        min = c<temp?c:temp;
        int temp2 = a>b?a:b;
        max = c>temp2?c:temp2;
        
        System.out.println("The smallest number is: "+min);
        System.out.println("The largest number is: "+max);
    }
}
