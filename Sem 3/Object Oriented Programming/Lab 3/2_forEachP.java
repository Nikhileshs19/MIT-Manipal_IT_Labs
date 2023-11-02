/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;

public class pyramid {
    public static void main(String args[]){
        int n;
        Scanner sc= new Scanner(System.in);
        
        System.out.println("Enter number of rows");
        n = sc.nextInt();
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<i;j++){
                System.out.print(i+ " ");
            }
            System.out.println(" ");
        }
        
        int[] a = {1,2,3,4,5};
        for(int i=0;i<n;i++){
            a[i] = i+1;
        }
        for(int j : a){
            for(int k=0;k<j;k++){
                System.out.print(j+ " ");
            }
            System.out.println(" ");
        }
    }
}
