/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

//import java.util.Scanner;

interface Shape1{
    void area();
    double pi = 3.141592654;
}

class Rectangle1 implements Shape1{
    double l, b;
    Rectangle1(double length, double breadth){
        l = length;
        b = breadth;
    }
    public void area(){
        double a = l * b;
        System.out.println("Area of rectangle is: "+a);
    }
}

class Circle1 implements Shape1{
    double r;
    Circle1(double radius){
        r = radius;
    }
    public void area(){
        double a = pi * r * r;
        System.out.println("Area of circle is: "+a);
    }
}

public class InterfaceArea {
    public static void main(String args[]){
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter length and breadth of rectangle");
//        double l = sc.nextDouble();
//        double b = sc.nextDouble();
//        System.out.println("Enter radius of circle");
//        double r = sc.nextDouble();
//        Rectangle1 rect1 = new Rectangle1(l, b);
//        Circle1 c1 = new Circle1(r);

        Rectangle1 rect1 = new Rectangle1(13,31);
        Circle1 c1 = new Circle1(19);
        rect1.area();
        c1.area();
    }
}
