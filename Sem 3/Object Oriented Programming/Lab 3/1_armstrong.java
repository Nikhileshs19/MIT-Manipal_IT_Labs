/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;

public class armstrong {
    
    static int power(int r, int n){
        int sum = 1;
        for(int i=0;i<n;i++){
            sum *= r;
        }
        return sum;
    }
    
    static boolean isArmstrong(int x, int n)
    {
        int temp = x, sum = 0;
        while (temp != 0) {
            int r = temp % 10;
            sum = sum + power(r, n);
            temp = temp / 10;
        }
        System.out.println(sum);
        return (sum == x);
    }
    
    public static void main(String args[]){
        int num, n = 0;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter number\n");
        num = sc.nextInt();
        int temp = (int)num;
        
        while (temp != 0) {
            n++;
            temp = temp / 10;
        }
        
        System.out.println(n);
       
        boolean flag = isArmstrong(num,n);
        if(flag)
            System.out.println("Number is an armstrong number");
        else 
            System.out.println("Number is not an armstrong number");
        
        
    }
}
