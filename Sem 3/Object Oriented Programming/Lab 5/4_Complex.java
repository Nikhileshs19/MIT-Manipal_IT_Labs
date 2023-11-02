/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;

public class Complex {
    double real;
    double imaginary;
    
    Complex(double r,double i){
        real = r;
        imaginary = i;
    }
    
    void display(){
        System.out.println("Complex number is: "+real+"+"+imaginary+"i");
    }
    public static void add(double a, Complex c){
        double r, i;
        r = a+c.real;
        i = c.imaginary;
        System.out.println("Addition is = "+r+"+"+i+"i");
    }
    public static void add(Complex c1, Complex c2){
        double r, i;
        r = c1.real + c2.real;
        i = c1.imaginary + c2.imaginary;
        System.out.println("Addition is = "+r+"+"+i+"i");
    }
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        double r1, i1, r2, i2;
        System.out.println("Enter first number real and imaginary part");
        r1 = sc.nextDouble();
        i1 = sc.nextDouble();
        System.out.println("Enter second number real and imaginary part");
        r2 = sc.nextDouble();
        i2 = sc.nextDouble();
        Complex c2 = new Complex(r2,i2);
        if(i1 != 0){
            Complex c1 = new Complex(r1,i1);
            add(c1,c2);
        }
        else 
            add(r1,c2);
        
    }
}
