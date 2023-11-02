/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */
import java.util.*; 
public class convert {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int n;
        double d;
        char c;
        System.out.println("Enter an integer, a double and a character");
        n = sc.nextInt();
        d = sc.nextDouble();
        c = sc.next().charAt(0);
        byte b = (byte) n;
        int ch = (int)c;
        byte bt = (byte)d;
        int doub = (int)d;
        System.out.println("Int "+n+" to Byte gives: " + b);
        System.out.println("Char "+c+" to Int gives: " + ch);
        System.out.println("Double "+d+" to Byte gives: " + bt);
        System.out.println("Double "+d+" to Int gives: " + doub);
    }
}
