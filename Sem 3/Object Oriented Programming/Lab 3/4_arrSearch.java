/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;

public class arrSearch {
    public static void main(String args[]){
        int[] numbers = {1,2,3,4,5,6,7,8,2,3,5,1,6,7,2,4,6,7};
        int n, i=0;
        Scanner sc= new Scanner(System.in);
        
        System.out.println("Enter element to search");
        n = sc.nextInt();
        
        System.out.print("The value is found at locations: ");
        for(int num : numbers){
            i++;
            if(n == num)
                System.out.print("a["+(i-1)+"] ");
        }
    }
}
