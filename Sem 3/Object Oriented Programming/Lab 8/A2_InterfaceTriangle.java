/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

//import java.util.Scanner;

interface Shape3{
    void area();
    double pi = 3.141592654;
}

class Square1 implements Shape3{
    double l;
    Square1(double length){
        l = length;
    }
    public void area(){
        double a = l * l;
        System.out.println("Area of square is: "+a);
    }
}

class Triangle1 implements Shape3{
    double b, h;
    Triangle1(double base, double height){
        b = base;
        h = height;
    }
    public void area(){
        double a = 0.5 * b * h;
        System.out.println("Area of triangle is: "+a);
    }
}

public class InterfaceTriangle {
    public static void main(String args[]){
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter length of square");
//        double l = sc.nextDouble();
//        System.out.println("Enter base and height of triangle");
//        double b = sc.nextDouble();
//        double h = sc.nextDouble();
//        Square1 s1 = new Square1(l);
//        Triangle1 t1 = new Triangle1(b, h);

        Square1 s1 = new Square1(9);
        Triangle1 t1 = new Triangle1(14, 18);
        s1.area();
        t1.area();
    }
}
