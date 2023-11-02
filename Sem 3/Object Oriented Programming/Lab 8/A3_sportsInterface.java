/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

//import java.util.Scanner;

interface sports{
    void getNumberOfGoals();
    void dispTeam();
}

class Hockey implements sports{
    public void getNumberOfGoals(){
        System.out.println("The current score in hockey is 2:1");
    }
    public void dispTeam(){
        System.out.println("The winning team is India");
    }
}

class football implements sports{
    public void getNumberOfGoals(){
        System.out.println("The current score in football is 7:1");
    }
    public void dispTeam(){
        System.out.println("The winning team is Germany");
    }
}

public class sportsInterface {
    public static void main(String args[]){
        Hockey h = new Hockey();
        football f = new football();

        h.getNumberOfGoals();
        h.dispTeam();

        f.getNumberOfGoals();
        f.dispTeam();
    }
}
