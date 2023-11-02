/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;
import java.lang.Math;

public class Bank {
    double balance;
    double interest;
    
    Bank(double bal){
        balance = bal;
    }
    
    void getRateOfInterest(){
        System.out.println("Not a bank yet");
    }   
    
    public static void main(String args[]){
        SBI sbi = new SBI(1000);
        ICICI icici = new ICICI(1000);
        AXIS axis = new AXIS(1000);
        
        sbi.getRateOfInterest();
        icici.getRateOfInterest();
        axis.getRateOfInterest();
        
        sbi.calculate(3);
        icici.calculate(3);
        axis.calculate(3);
    }
}

class SBI extends Bank{
    double roi = 8;
    SBI(double bal){
        super(bal);
    }
    
    void calculate(double years){
        interest = balance * (Math.pow(1+(roi/100), years));
        System.out.println(interest);
    }
    
    void getRateOfInterest(){
        System.out.println("SBI rate of interest is: "+roi);
    }   
}

class ICICI extends Bank{
    double roi = 7;
    ICICI(double bal){
        super(bal);
    }
    void calculate(double years){
        interest = balance * (Math.pow(1+(roi/100), years));
        System.out.println(interest);
    }
    
    void getRateOfInterest(){
        System.out.println("ICICI rate of interest is: "+roi);
    }   
}

class AXIS extends Bank{
    double roi = 9;
    AXIS(double bal){
        super(bal);
    }
    void calculate(double years){
        interest = balance * (Math.pow((1+(roi/100)), years));
        System.out.println(interest);
    }
    
    void getRateOfInterest(){
        System.out.println("AXIS rate of interest is: "+roi);
    }   
}