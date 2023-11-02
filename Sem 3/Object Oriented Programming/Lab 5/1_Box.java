/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;

public class Box {
    double width;
    double height;
    double depth;
    
    Box(double w, double h, double d){
        width = w;
        height = h;
        depth = d;
    }
    
    double getVol(){
        return width*height*depth;
    }
    double getVol(double w, double h, double d){
        return w*d*h;
    }
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        double w,h,d;
        System.out.println("Enter box width");
        w = sc.nextDouble();
        System.out.println("Enter box height");
        h = sc.nextDouble();
        System.out.println("Enter box depth");
        d = sc.nextDouble();
        
        Box mybox = new Box(w,h,d);
        double vol = mybox.getVol();
        System.out.println("Volume of box is: "+vol);
        
    }
}
