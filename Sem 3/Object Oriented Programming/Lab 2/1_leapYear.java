/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */
import java.util.*;
public class leapYear {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        boolean Leap;
        System.out.println("Enter a year");
        int year = sc.nextInt();
        if(year%4!=0){
            Leap = false;
        }
        else if(year%100!=0){
            Leap = true;
        }
        else if(year%400!=0){
            Leap = false;
        }
        else 
            Leap = true;
        
        if(Leap == true)
            System.out.println("Year is a leap year");
        else
            System.out.println("Year is not a leap year");
    }
}