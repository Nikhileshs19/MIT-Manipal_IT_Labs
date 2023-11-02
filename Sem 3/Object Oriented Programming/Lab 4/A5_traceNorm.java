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

public class traceNorm {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        double t=0,n=0;
        System.out.println("Enter dimensions of square");
        int m = sc.nextInt();
        
        int a [][] = new int [m][m];
        System.out.println("Enter elements of square");
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                a[i][j] = sc.nextInt();
                if(i == j)
                    t += a[i][j];
                n += a[i][j]*a[i][j];
            }
        }
        n = Math.sqrt(n);
        
        System.out.println("Trace and norm of the matrix are "+t+" and "+n+" respectively");
        
        
    }
}
