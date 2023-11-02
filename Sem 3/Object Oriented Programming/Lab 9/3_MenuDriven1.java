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

public class MenuDriven1 {
    static void Palindrome(String s){
        char ch;
        String nstr = "";
        for (int i=0; i<s.length(); i++)
        {
          ch= s.charAt(i);
          nstr= ch+nstr;
        }
        if(s.equalsIgnoreCase(nstr))
            System.out.println("String is Palindrome");
        else
            System.out.println("String is not a Palindrome");
    }
    
    static void Reverse(String s){
        char ch;
        String nstr = "";
        for (int i=0; i<s.length(); i++)
        {
          ch= s.charAt(i); 
          nstr= ch+nstr; 
        }
        System.out.println("Reversed word: "+ nstr);
    }
    
    static void Alphabetical(String s){
        char[] chars = s.toCharArray();
        for (int i = 0; i < chars.length - 1; i++) {
            for (int j = i + 1; j < chars.length; j++) {
                if (chars[i] > chars[j]) {
                    char temp = chars[i];
                    chars[i] = chars[j];
                    chars[j] = temp;
                }
            }
        }
        String sorted = new String(chars);
        System.out.println("Alphabetical string: " + sorted);
    }
    
    static void Concatenate(String s){
        char ch;
        String nstr = "";
        for (int i=0; i<s.length(); i++)
        {
          ch= s.charAt(i); 
          nstr= ch+nstr; 
        }
        System.out.println("Concatenated string is: "+s.concat(nstr));
    }
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int choice;
        String s;
        while(true){
            System.out.println("1. Check if string is palindrome\n2. Write string in alphabetical order\n3. Reverse the string\n4. Concatenate the original and reversed string\n5. Exit");
            choice = sc.nextInt();
            sc.nextLine();
            switch(choice){
                case 1:
                    System.out.println("Enter a string");
                    s = sc.nextLine();
                    Palindrome(s);
                    break;
                case 2:
                    System.out.println("Enter a string");
                    s = sc.nextLine();
                    Alphabetical(s);
                    break;
                case 3:
                    System.out.println("Enter a string");
                    s = sc.nextLine();
                    Reverse(s);
                    break;
                case 4:
                    System.out.println("Enter a string");
                    s = sc.nextLine();
                    Concatenate(s);
                    break;
                case 5:
                    return;
                default:
                    System.out.println("Enter valid number from 1-5");
            }
        }
    }
}
