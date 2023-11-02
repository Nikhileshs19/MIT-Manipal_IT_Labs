/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.lang.Math;
//import java.util.Scanner;

abstract class Shape{
    abstract void area();
    double area;
}

class Rectangle extends Shape{
    double l,b;
    Rectangle(double length, double breadth){
        l = length;
        b = breadth;
    }
    void area(){
        area = l * b;
        System.out.println("Area of rectangle is: "+area);
    }
}

class Circle extends Shape{
    double r;
    Circle(double radius){
        r = radius;
    }
    void area(){
        area = Math.PI * r * r;
        System.out.println("Area of circle is: "+area);
    }
}

public class AbsArea {
    public static void main(String args[]){
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter length and breadth of rectangle");
//        double l = sc.nextDouble();
//        double b = sc.nextDouble();
//        System.out.println("Enter radius of circle");
//        double r = sc.nextDouble();
//        Rectangle rect = new Rectangle(l, b);
//        Circle c = new Circle(r);
        
        Rectangle rect = new Rectangle(15,29);
        Circle c = new Circle(12);
        rect.area();
        c.area();
    }
}
