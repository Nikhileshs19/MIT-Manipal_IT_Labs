/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;

public class pattern {
    public static void main(String[] args)
    {
        int n, num = 1;
        Scanner sc= new Scanner(System.in);
        
        System.out.println("Enter number of rows");
        n = sc.nextInt();
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<i;j++){
                System.out.print(num+ " ");
                num++;
            }
            System.out.println(" ");
        }
        
    }
}
