/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

public class pDiag {
    public static boolean isPrime(int n){
        if(n == 1 || n == 0)
            return false;
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                System.out.println(n+" is not prime");
                return false;
            }
        }
        return true;
    }
    public static void main(String args[]){
        int[][] a = {{4,2,3},{4,6,6},{7,8,11}};
        for(int i=0;i<3;i++){
            for(int j=0; j<3; j++){
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
        int sum = 0;
        int len = a.length;
        
        for(int i=0;i<len;i++){
            if(!isPrime(a[i][i])){
                sum += a[i][i];
//                System.out.print(a[i][i]+ " ");
            }
        }
        
        System.out.println("\nSum of non prime principal diagonal elements: "+sum);
    }
}
