/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

//import java.util.Scanner;

abstract class Shape2{
    abstract void area();
    double area;
}

class Square extends Shape2{
    double l;
    Square(double length){
        l = length;
    }
    void area(){
        area = l * l;
        System.out.println("Area of square is: "+area);
    }
}

class Triangle extends Shape2{
    double b, h;
    Triangle(double base, double height){
        b = base;
        h = height;
    }
    void area(){
        area = 0.5 * b * h;
        System.out.println("Area of triangle is: "+area);
    }
}

public class AbsTriangle {
    public static void main(String args[]){
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter length of square");
//        double l = sc.nextDouble();
//        System.out.println("Enter base and height of triangle");
//        double b = sc.nextDouble();
//        double h = sc.nextDouble();
//        Square s = new Square(l);
//        Triangle t = new Triangle(b, h);

        Square s = new Square(29);
        Triangle t = new Triangle(12,25);
        s.area();
        t.area();
    }
}
