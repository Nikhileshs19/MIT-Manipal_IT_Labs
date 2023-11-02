/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.lab10;

/**
 *
 * @author student
 */
public class matrixError {
    public static boolean isSquareMatrix(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;

        if (rows != cols) {
            return false;
        }

        return true;
    }
    public static void main(String[] args) {
        int[][] matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

        boolean isSquare = isSquareMatrix(matrix);

        if (isSquare) {
            System.out.println("The matrix is a square matrix.");
        } else {
            System.out.println("Error: The matrix is not a square matrix.");
        }
    }
}
