/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */
import java.util.Scanner;

public class arrMerge {
    public static void sort(int a[],int l){
        int temp;
        for(int i=0;i<l-1;i++){
            for(int j=i;j<l-1;j++){
                if(a[j]>a[j+1]){
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
    }
    
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter dimension of first array");
        int l = sc.nextInt();
        int a[] = new int [l];
        System.out.println("Enter dimension of second array");
        int l1 = sc.nextInt();
        int b[] = new int [l1];
        
        System.out.println("Enter elements of first array");
        for(int i=0;i<l;i++){
            a[i] = sc.nextInt();
        }
        System.out.println("Enter elements of second array");
        for(int i=0;i<l1;i++){
            b[i] = sc.nextInt();
        }
        int l2 = l + l1;
        int c [] = new int [l2];
        for(int i=0;i<l;i++)
            c[i] = a[i];
        for(int i=0;i<l1;i++)
            c[l+i] = b[i];
        
        sort(c,l2);
        for(int i=0;i<l2;i++)
            System.out.print(c[i]+" ");
    }
}
