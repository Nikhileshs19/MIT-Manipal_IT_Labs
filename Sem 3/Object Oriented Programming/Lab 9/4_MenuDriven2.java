/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.lab9;

/**
 *
 * @author student
 */
import java.util.Scanner;

public class MenuDriven2 {
    static void CompareTwo(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two strings");
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        int comp = s1.compareTo(s2);
        System.out.println("Result of comparing both strings is: "+comp);
    }
    
    static void SwitchCase(String s){
        String result = "";
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (Character.isUpperCase(c)) {
                result += Character.toLowerCase(c);
            } else if (Character.isLowerCase(c)) {
                result += Character.toUpperCase(c);
            } else {
                result += c;
            }
        }
        System.out.println("Result: " + result);
    }
    
    static void ContainsSub(String s, String sub){
        if(s.contains(sub))
            System.out.println("Substring is present in string");
        else 
            System.out.println("Substring is not present in string");
        
    }
    
    static void HelloSub(String s, String sub){
        if (s.contains(sub)) {
            String result = s.replace(sub, "Hello");
            System.out.println("Result: " + result);
        } else {
            System.out.println("The first string is not a substring of the second string.");
        }
            
    }
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int choice;
        String s, sub;
        while(true){
            System.out.println("1. Compare two strings\n2. Switch case\n3. Substring\n4. If substring replace Hello\n5. Exit");
            choice = sc.nextInt();
            sc.nextLine();
            switch(choice){
                case 1:
                    CompareTwo();
                    break;
                case 2:
                    System.out.println("Enter a string");
                    s = sc.nextLine();
                    SwitchCase(s);
                    break;
                case 3:
                    System.out.println("Enter a string");
                    s = sc.nextLine();
                    System.out.println("Enter substring");
                    sub = sc.nextLine();
                    ContainsSub(s, sub);
                    break;
                case 4:
                    System.out.println("Enter a string");
                    s = sc.nextLine();
                    System.out.println("Enter substring");
                    sub = sc.nextLine();
                    HelloSub(s, sub);
                    break;
                case 5:
                    return;
                default:
                    System.out.println("Enter valid number from 1-5");
            }
        }
    }
}
