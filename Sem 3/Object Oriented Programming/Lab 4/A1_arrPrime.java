/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;

public class arrPrime {
    public static boolean isPrime(int n){
        if(n == 0 || n == 1)
            return false;
        for(int i=2;i<=n/2;i++){
            if(n%i == 0)
                return false;
        }
        return true;
    }
    
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter dimension of 1D array");
        int l = sc.nextInt();
        int a[] = new int [l];
        
        System.out.println("Enter elements of array");
        for(int i=0;i<l;i++){
            a[i] = sc.nextInt();
        }
        
        for(int i=0;i<l;i++){
            if(isPrime(a[i])){
                System.out.print(a[i]+" ");
            }
        }
    }
}
