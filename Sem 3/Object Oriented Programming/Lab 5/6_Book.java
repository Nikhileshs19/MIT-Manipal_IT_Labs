/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */

import java.util.Scanner;

public class Book {
    String title;
    String author;
    int edition;
    
    Book(String t, String a, int e){
        title = t;
        author = a;
        edition = e;
    }
    Book(){}
    
    void displayAuthor(String au){
        if(author == au)
            System.out.println(title);
    }
    
    static public Book read(){
        Scanner sc = new Scanner(System.in);
        String t, a;
        int e;
        System.out.println("Enter book title");
        t = sc.nextLine();
        System.out.println("Enter author name");
        a = sc.nextLine();
        System.out.println("Enter book edition");
        e = sc.nextInt();
        Book b = new Book(t,a,e);
        return b;
    }
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        Book b[] = new Book[6];
        for(int i=0;i<6;i++){
            b[i] = read();
        }
        System.out.println("Enter author to filter for");
        String au = sc.nextLine();
        for(int i=0;i<6;i++){
            b[i].displayAuthor(au);
        }
    }
}
