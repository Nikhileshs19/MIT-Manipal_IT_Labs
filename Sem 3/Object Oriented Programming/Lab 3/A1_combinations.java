/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;

public class combinations {
    public static void main(String[] args)
    {
        int[] a = { 1, 5, 3, 6 }; 
        Scanner sc= new Scanner(System.in);
        
        System.out.println("Enter 4 numbers");
        for(int i=0; i <4 ; i++){
            a[i] = sc.nextInt();
        }
        
        System.out.println("Duplicates allowed (y/n)");
        char ch = sc.next().charAt(0);
        
        switch(ch){
            case 'y':
                for (int w = 0; w < 4; w++) 
                {
                   for (int x = 0; x < 4; x++) 
                    {
                        for (int y = 0; y <4; y++) 
                        {
                            for (int z = 0; z < 4; z++) 
                            {
                               System.out.println(a[w] + ""+a[x] + "" + a[y] + "" + a[z]); 
                            }
                        }
                    }
                }
                break;
            
            case 'n':
                for (int w = 0; w < 4; w++) 
                {
                   for (int x = 0; x < 4; x++) 
                    {
                       for (int y = 0; y <4; y++) 
                       {
                         for (int z = 0; z < 4; z++) 
                         {
                            if (w!=x && w!=y && w!=z && x != y && x!=z && y != z) 
                            { 
                            System.out.println(a[w] + ""+a[x] + "" + a[y] + "" + a[z]); 
                            } 
                         }
                       }
                    }
                }
        }
    }
}

