/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;

public class Student {
    double reg_no;
    String name;
    int age;
    public static int total = 0;
    
    Student(int no, String n, int a){
        reg_no = no;
        name = n;
        age = a;
        total++;
    }
    
    void displaySem(){
        System.out.println("Not in college");
    }
    
    void display(){
        System.out.println("Registration number: "+reg_no+", Name: "+name+", Age: "+age);
    }
    
    void number(){
        System.out.println("Total number of students = "+total);
    }
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        UG ug = new UG(1234,"UG dude",19,3,50000);
        PG pg = new PG(2345,"PG dude", 23, 2, 2000000);
        UG ug1 = new UG(3456,"Other UG dude", 20, 5, 60000);
        
        ug.displaySem();
        pg.displaySem();
        ug1.displaySem();
        
        ug.display();
        pg.display();
        ug1.display();
        
        ug.number();
        pg.P_count();
        ug1.U_count();
    }
}

class UG extends Student{
    int sem;
    double fees;
    public static int uc=0;
    
    UG(int no, String n, int a, int s, double f){
        super(no,n,a);
        sem = s;
        fees = f;
        uc++;
    }
    
    void displaySem(){
        System.out.println(name+" is in "+sem+" sem, in UG");
    }
    
    void display(){
        System.out.println("Registration number: "+reg_no+", Name: "+name+", Age: "+age+", Sem: "+sem);
    }
    
    void U_count(){
        System.out.println("Total number of UG students = "+uc);
    }
    
}

class PG extends Student{
    int sem;
    double fees;
    public static int pc=0;
    
    PG(int no, String n, int a, int s, double f){
        super(no,n,a);
        sem = s;
        fees = f;
        pc++;
    }
    
    void displaySem(){
        System.out.println(name+" is in "+(sem+4)+" sem, in PG");
    }
    
    void display(){
        System.out.println("Registration number: "+reg_no+", Name: "+name+", Age: "+age+", Sem: "+sem);
    }
    
    void P_count(){
        System.out.println("Total number of PG students = "+pc);
    }
}