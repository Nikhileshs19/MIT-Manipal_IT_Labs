/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;

public class Employee {
    String employee_name;
    String city;
    double basic_salary;
    double DA;
    double HRA;
    double Total;
    
    void getdata(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter name");
        employee_name = sc.nextLine();
        System.out.println("Enter city");
        city = sc.nextLine();
        System.out.println("Enter basic salary");
        basic_salary = sc.nextDouble();
        System.out.println("Enter Dearness Allowance %");
        DA = sc.nextDouble();
        System.out.println("Enter house rent %");
        HRA = sc.nextDouble();
    }
    void calculate(){
        Total = basic_salary + (basic_salary*DA)/100 + (basic_salary*HRA)/100;
    }
    void display(){
        calculate();
        System.out.println("Your total salary is: "+Total);
    }
    
    
    public static void main(String args[]){
        Employee e = new Employee();
        e.getdata();
        e.calculate();
        e.display();
    }
}
