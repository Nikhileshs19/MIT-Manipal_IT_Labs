/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;

public class matMult {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int m1 = 3, m2 = 3, n1 = 3, n2 = 3;
        int[][] a = {{1,2,3},{4,5,6},{7,8,9}};
        int [][] b = {{1,3,4},{2,9,5},{7,3,6}};

//        System.out.println("Enter dimensions of first matrix");
//        int m1 = sc.nextInt();
//        int n1 = sc.nextInt();
//        System.out.println("Enter dimensions of second matrix");
//        int m2 = sc.nextInt();
//        int n2 = sc.nextInt();
        if(n1!=m2){
            System.out.println("The matrices can't be multiplied");
            return;
        }
        
//        int a [][] = new int [m1][n1];
//        int b [][] = new int [m2][n2];
        int c [][] = new int [m1][n2];
        int d [][] = new int [m1][n2];
        
        for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
                c[i][j] = 0;
                d[i][j] = a[i][j]+b[i][j];
                for(int k=0;k<n1;k++){
                    c[i][j] += a[i][k] * b[k][j];
                }
                System.out.print(c[i][j]+" ");
            }
            System.out.println();
        }
        
        for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
                System.out.print(d[i][j]+" ");
            }
            System.out.println();
        }
    }
}
