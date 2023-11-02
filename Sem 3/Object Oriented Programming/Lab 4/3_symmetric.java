/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;

public class symmetric {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
//        int[][] a = {{1,2,3},{4,5,6},{7,8,9}};  Not Symmetric
//        int [][] a = {{1,2,3},{2,5,3},{3,3,9}};  Symmetric
        
        int [][] a = new int [3][3];
        int len = a.length;
        
        System.out.println("Enter elements of array");
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                a[i][j] = sc.nextInt();
            }
        }
        
        boolean flag = true;
        
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                if(a[i][j]!=a[j][i]){
                    flag = false;
                    break;
                }
            }
        }
        
        if(flag)
            System.out.println("Array is symmetric");
        else
            System.out.println("Array is not symmetric");
    }
}
