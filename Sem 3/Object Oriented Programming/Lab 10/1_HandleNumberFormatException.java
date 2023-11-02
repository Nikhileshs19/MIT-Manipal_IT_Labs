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

public class HandleNumberFormatException {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        String s = sc.nextLine();
        try {
            int n = Integer.parseInt(s);
            System.out.println("The number is: " + n);
        } catch (NumberFormatException e) {
            System.out.println("Invalid input: " + s + " is not a valid integer.");
        }
    }
}

