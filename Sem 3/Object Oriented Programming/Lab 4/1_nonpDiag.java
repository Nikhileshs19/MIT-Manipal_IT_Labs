/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

public class nonpDiag {
    public static void main(String args[]){
        int[][] a = {{1,2,3},{4,5,6},{7,8,9}};
        int sum = 0, sum1 = 0;
        int len = a.length;
        
        for(int i=0;i<len;i++){
            sum += a[i][len-1-i];
            System.out.print(a[i][2-i]+ " ");
        }
    
        System.out.println("\nSum of non principal diagonal elements: "+sum);
        
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                if(j!=i && j!=len-1-i){
                    System.out.print(a[i][j]+" ");
                    sum1 += a[i][j];
                }
            }
        }
        System.out.println("Sum of non diagonal elements: "+sum1);

    }
}
