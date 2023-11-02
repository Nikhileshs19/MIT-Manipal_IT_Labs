/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

public class Game {
    void type(){
        System.out.println("indoor & outdoor games");
    }
    
    public static void main(String args[]){
        Game game = new Game();
        cricket c = new cricket();
        chess ch = new chess();
        
        game.type();
        c.type();
        ch.type();
    }
}

class cricket extends Game{
    void type(){
        System.out.println("cricket is an outdoor game");
    }
}

class chess extends Game{
    void type(){
        System.out.println("chess is an indoor game");
    }
}
