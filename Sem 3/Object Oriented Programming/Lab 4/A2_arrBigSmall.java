/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */
import java.util.Scanner;

public class arrBigSmall {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int b = 0,s = 99999;
        System.out.println("Enter dimension of 1D array");
        int l = sc.nextInt();
        int a[] = new int [l];
        
        System.out.println("Enter elements of array");
        for(int i=0;i<l;i++){
            a[i] = sc.nextInt();
            if(a[i] > b)
                b = a[i];
            if(a[i] < s)
                s = a[i];
        }
        
        System.out.println("Largest and smallest number in array are "+b+" and "+s+" respectively");
    }
}
