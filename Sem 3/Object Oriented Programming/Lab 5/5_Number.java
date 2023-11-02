/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;

public class Number {
    private double num;
    Number(double n){
        num = n;
    }
    
    boolean isZero(){
        return (num == 0);
    }
    boolean isPositive(){
        return (num>0);
    }
    boolean isNegative(){
        return (num<0);
    }
    boolean isOdd(){
        return (num%2==1);
    }
    boolean isEven(){
        return (num%2==0);
    }
    boolean isPrime(){
        for(int i=2;i<=num/2;i++){
            if(num%i==0)
                return false;
        }
        return true;
    }
    boolean isArmstrong(){
        double temp = num, r, s = 0;
        while(temp > 1){
            r = temp%10;
            s += r*r*r;
            temp/=10;
        }
        return (s == num);
    }
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number");
        double n = sc.nextDouble();
        Number num = new Number(n);
        if(num.isZero())
            System.out.println("Number is zero");
        if(num.isPositive())
            System.out.println("Number is positive");
        if(num.isNegative())
            System.out.println("Number is negative");
        if(num.isOdd())
            System.out.println("Number is odd");
        if(num.isEven())
            System.out.println("Number is even");
        if(num.isPrime())
            System.out.println("Number is prime");
        if(num.isArmstrong())
            System.out.println("Number is armstrong");
    }
}
