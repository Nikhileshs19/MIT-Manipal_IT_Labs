/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;
        
public class sine {
    public static void main(String[] args)
    {
        double x,y;
        Scanner sc= new Scanner(System.in);

        System.out.println("Enter the angle whose sine is to be calculated in degrees");
        x = sc.nextDouble();
        y = x*Math.PI/180;

        int n = 10;
        int i,j,fac;

        double sine = 0;

        for(i=0; i<=n; i++){
            fac = 1;
            for(j=2; j<=2*i+1; j++){
                fac*=j;
            }
            sine+=Math.pow(-1.0,i)*Math.pow(y,2*i+1)/fac;
        }

        System.out.format("The sine of " + x + " is %f",sine);

    }
}
