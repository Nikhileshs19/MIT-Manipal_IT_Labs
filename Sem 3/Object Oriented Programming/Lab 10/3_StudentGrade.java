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

public class StudentGrade{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter student's name: ");
        String name = input.nextLine();

        int rollNumber = 0;
        boolean validRollNumber = false;
        while (!validRollNumber) {
            try {
                System.out.print("Enter roll number: ");
                rollNumber = Integer.parseInt(input.nextLine());
                validRollNumber = true;
            } catch (NumberFormatException e) {
                System.out.println("Invalid roll number. Please enter a number.");
            }
        }

        int[] marks = new int[3];
        boolean validMarks = false;
        while (!validMarks) {
            try {
                System.out.print("Enter marks in three subjects (separated by spaces): ");
                String[] marksStr = input.nextLine().split(" ");
                for (int i = 0; i < 3; i++) {
                    marks[i] = Integer.parseInt(marksStr[i]);
                }
                validMarks = true;
            } catch (NumberFormatException e) {
                System.out.println("Invalid marks. Please enter numbers.");
            }
        }

        int totalMarks = marks[0] + marks[1] + marks[2];
        double percentage = (double) totalMarks / 300 * 100;

        String grade;
        if (percentage >= 90) {
            grade = "A+";
        } else if (percentage >= 80) {
            grade = "A";
        } else if (percentage >= 70) {
            grade = "B+";
        } else if (percentage >= 60) {
            grade = "B";
        } else if (percentage >= 50) {
            grade = "C";
        } else if (percentage >= 40) {
            grade = "D";
        } else {
            grade = "E";
        }

        System.out.println("Name: " + name);
        System.out.println("Roll Number: " + rollNumber);
        System.out.println("Total Marks: " + totalMarks);
        System.out.println("Percentage: " + percentage);
        System.out.println("Grade: " + grade);
    }
}
