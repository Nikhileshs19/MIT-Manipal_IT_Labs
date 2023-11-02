/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


/**
 *
 * @author student
 */

import java.util.*; 
public class typeCast {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        
        int x1 = 10;
        double y1 = x1;
        System.out.println(y1);
        
        //gives error = Uncompilable code - incompatible types: possible lossy conversion from double to int
//        double x2 = 10.5;
//        int y2 = x2;
//        System.out.println(y2);
        
        double x3 = 10.5;
        int y3 = (int)x3;
        System.out.println(y3);
    }
}
