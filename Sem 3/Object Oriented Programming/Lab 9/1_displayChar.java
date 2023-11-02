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

public class displayChar {
    
    static int countChar(String s){
        int count = 0;
        for(int i = 0; i<s.length(); i++) {    
            if(s.charAt(i) != ' ')    
                count++;    
        } 
        return count;
    }
    
    static int countWords(String s){
        int count = 1;
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i)== ' ')
                count++;
        }
        return count;
    }
    
    static int countLines(String s)
    {
        if (s == null || s.length() == 0)
            return 0;
        int lines = 1;
        int len = s.length();
        for( int pos = 0; pos < len; pos++) {
            char c = s.charAt(pos);
            if( c == '\r' ) {
                lines++;
                if ( pos+1 < len && s.charAt(pos+1) == '\n' )
                    pos++;
            } else if( c == '\n' ) {
                lines++;
            }
        }
        return lines;
    }
    
    static int countVowels(String s){
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o' || s.charAt(i) == 'u')
                count++;
        }
        return count;
    }
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string");
        String s = sc.nextLine();
        int count = 0;
        
        count = countChar(s);
        System.out.println("Number of characters in string is: "+count);
        
        count = countWords(s);
        System.out.println("Number of words in string is: "+count);
        
        count = countLines(s);
        System.out.println("Number of lines in string is: "+count);
        
        count = countVowels(s);
        System.out.println("Number of vowels in string is: "+count);
    }
}
