/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.lab10;

/**
 *
 * @author student
 */
import java.util.Scanner;

public class NegativeNumber {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter a number: ");
        double num = input.nextDouble();

        try {
            if (num < 0) {
                throw new ArithmeticException("Cannot take square root of a negative number.");
            }
            double root = Math.sqrt(num);
            System.out.println("The square root of " + num + " is " + root);
        } catch (ArithmeticException e) {
            System.out.println(e.getMessage());
        }
    }
}
