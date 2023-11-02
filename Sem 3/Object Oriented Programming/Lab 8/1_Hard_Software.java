/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */
interface ware{
    void sales();
    double price = 200;
}

class Hardware implements ware{
    String category;
    String og_manufacturer;
    int no=26;
    
    Hardware(String c, String og){
        category = c;
        og_manufacturer = og;
        no++;
    }
    public void sales(){
        double sale = no * price;
        System.out.println("Sales for Hardware in the last 3 months is: "+sale);
    }
}

class Software implements ware{
    String type;
    String os;
    int no = 12;
    
    Software(String t, String o){
        type = t;
        os = o;
        no++;
    }
    public void sales(){
        double sale = no * price;
        System.out.println("Sales for Software in the last 3 months is: "+sale);
    }
}
public class Hard_Software {
    public static void main(String args[]){
        Hardware h = new Hardware("CPU","Intel");
        Software s = new Software("Application","Windows");
        
        s.sales();
        h.sales();
    }
}
