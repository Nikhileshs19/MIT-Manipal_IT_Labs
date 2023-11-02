/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */
import java.util.Scanner;

public class arrNum {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter dimension of matrix");
        int m = sc.nextInt();
        int n = sc.nextInt();
        int a[][] = new int [m][n];
        
        System.out.println("Enter elements of array");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j] = sc.nextInt();
            }
        }
        
        System.out.println("Enter elements to count occurences");
        int ele = sc.nextInt();
        int c = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j] == ele)
                    c++;
            }
        }
        
        System.out.println("Element was present in matrix "+c+" times");
        
    }
}
