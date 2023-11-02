/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;

public class prime {
    
    static boolean isPrime(int num){
        boolean flag = true;
        if(num == 1 || num == 0)
            return false;
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                flag = false;
                break;
            }
        }
        return flag;
    }
    
    public static void main(String args[]){
        int n, m;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter lower and upper limit");
        n = sc.nextInt();
        m = sc.nextInt();
        
        for(int i=n;i<=m;i++){
            if(isPrime(i))
                System.out.print(i+" ");
        }
    }
}
