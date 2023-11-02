/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */
public class Bikes {
    public static void main(String args[]){
        Bike b = new Bike();
        Splendar s = new Splendar();
        
        b.run();
        s.run();
    }
}

class Bike{
    int speedlimit = 80;
    
    void run(){
        System.out.println("Speedlimit is: "+speedlimit);
    }
}

class Splendar extends Bike{
    int speedlimit = 100;
    
    void run(){
        System.out.println("Splendar speedlimit is: "+speedlimit);
    }
}