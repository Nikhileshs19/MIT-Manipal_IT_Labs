/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;

public class Time {
    int hours;
    int minutes;
    int seconds;
    
    Time(){
        hours = minutes = seconds = 0;
    }
    Time(int h, int m, int s){
        hours = h;
        minutes = m;
        seconds = s;
    }
    
    void display(){
//        System.out.println("The time is - "+hours+":"+minutes+":"+seconds);
        System.out.printf("The time is - %02d:%02d:%02d\n", hours, minutes,seconds);
    }
    Time add(Time t2){
        Time add = new Time();
        add.hours = hours + t2.hours;
        add.minutes = minutes + t2.minutes;
        while(add.minutes > 60){
            ++ add.hours;
            add.minutes -= 60;
        }
        add.seconds = seconds + t2.seconds;
        while(add.seconds > 60){
            ++ add.minutes;
            add.seconds -= 60;
        }
        return add;
    }
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first time in hours, minutes, seconds");
        int h1,m1,s1,h2,m2,s2;
        h1 = sc.nextInt();
        m1 = sc.nextInt();
        s1 = sc.nextInt();
        System.out.println("Enter second time in hours, minutes, seconds");
        h2 = sc.nextInt();
        m2 = sc.nextInt();
        s2 = sc.nextInt();
        Time t1 = new Time(h1,m1,s1);
        Time t2 = new Time(h2,m2,s2);
        t1.display();
        t2.display();
        Time add = t1.add(t2);
        add.display();
    }
}
