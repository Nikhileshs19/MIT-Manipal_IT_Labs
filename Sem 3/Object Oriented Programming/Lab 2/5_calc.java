/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.*; 
public class calc {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        float a,b;
        char op, next;
        float result;
        do{
            System.out.println("Enter first number, operator, second number: ");
            a = sc.nextFloat();
            op = sc.next().charAt(0);
            b = sc.nextFloat();
            switch(op){
                case '+':
                    result = a + b;
                    break;
                case '-':
                    result = a - b;
                    break;
                case '*':
                    result = a * b;
                    break;
                case '/':
                    result = a / b;
                    break;
                default:
                    result = 0;
                    System.out.println("Enter correct operator");
            }


            System.out.println("Answer = "+result);
            System.out.println("Do another (y/n)?");
            next = sc.next().charAt(0);
        }while(next!='n');
        
        
    }
}
