/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.*;

public class Student_Detail {
    String name;
    int id;
    String college_name;
    
    Student_Detail(String n, int i, String cn){
        name = n;
        id = i;
        college_name = cn;
    }
    
    public void display_details(){
        System.out.println("Name: "+name);
        System.out.println("ID: "+id);
        System.out.println("College Name: "+college_name);
    }
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        
        Student_Detail s1 = new Student_Detail("N",1,"MIT");
        Student_Detail s2 = new Student_Detail("I",2,"MIT");
        Student_Detail s3 = new Student_Detail("K",3,"MIT");
        
        s1.display_details();
        s2.display_details();
        s3.display_details();
    }
}
