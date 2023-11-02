/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;

public class magicSquare {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter dimensions of square");
        int m = sc.nextInt();
        
        int a [][] = new int [m][m];
        System.out.println("Enter elements of square");
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++)
                a[i][j] = sc.nextInt();
        }
        
        boolean flag = false;
        int sum1 = 0,sum2=0;
        for (int i = 0; i < m; i++){
           sum1 += a[i][i];
           sum2 += a[i][m-1-i];
        }
        if(sum1!=sum2)
            flag = true; 
        
        for (int i = 0; i < m; i++) {
           int rowSum = 0, colSum = 0;
           for (int j = 0; j < m; j++){
              rowSum += a[i][j];
              colSum += a[j][i];
           }
           if (rowSum != colSum || colSum != sum1)
              flag = true; 
        }
           
        if (!flag)
           System.out.println("Given matrix is a Magic Square");
        else
           System.out.println("Given matrix is a not a Magic Square");
    }
}
