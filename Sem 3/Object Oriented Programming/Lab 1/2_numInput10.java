/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.*;  

public class numInput10 {
    public static void main(String[] args)  
    {  
        int p=0,n=0,z=0;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter 10 numbers");
        int a[] = new int[10];
        for(int i=0;i<10;i++){
            a[i] = sc.nextInt();
            if(a[i] >0){
                p++;
            }
            else if(a[i] < 0){
                n++;
            }
            else{
                z++;
            }
        }
        System.out.println("Number of positive numbers = " + p);
        System.out.println("Number of negative numbers = " + n);
        System.out.println("Number of zero numbers = " + z);
    }
}