/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */
import java.io.*;
 
public class box_unbox {
    public static void main(String[] args)
    {
        Integer box = new Integer(10);
        int i1 = box;
        System.out.println("Value of i: " + box);
        System.out.println("Value of i1: " + i1);
 
        Character c = new Character('a');
        char ch = c;
        System.out.println("Value of ch: " + ch);
        System.out.println("Value of gfg: " + c);
        
        Boolean bbox = new Boolean(true);
        boolean bool = bbox;
        System.out.println("Value of bbox: " + bbox);
        System.out.println("Value of bool: " + bool);
        
        Byte bytebox = new Byte((byte)14);
        byte byt = bytebox;
        System.out.println("Value of bytebox: " + bytebox);
        System.out.println("Value of byt: " + byt);
        
        Float fbox = new Float(2.0);
        float f = fbox;
        System.out.println("Value of fbox: " + fbox);
        System.out.println("Value of f: " + f);
        
        Long lbox = new Long(922337203685477L);
        long l = lbox;
        System.out.println("Value of lbox: " + lbox);
        System.out.println("Value of l: " + l);
        
        Short sbox = new Short((short)123);
        short s = sbox;
        System.out.println("Value of sbox: " + s);
        System.out.println("Value of s: " + s);
        
        Double dbox = new Double(2131.341);
        double d = dbox;
        System.out.println("Value of dbox: " + dbox);
        System.out.println("Value of d: " + d);
    }
}
