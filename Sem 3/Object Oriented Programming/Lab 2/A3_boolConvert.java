/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */
public class boolConvert {
    public static void main(String args[]){
        //error
//        boolean x1=true;
//        int y1 = x1;
        
        //error
//        boolean x2=true;
//        int y2 = (int)x2;
        
        boolean x3=true;
        int y3 = (x3) ? 1 : 0;
        
        boolean x4 = false;
        int y4 = (x4) ? 1:0;
        
        System.out.println("True gives: "+y3);
        System.out.println("False gives: "+y4);
    }
}
