/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */
import java.util.*;
public class palindrome {
     public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number");
        int n=sc.nextInt();
        int temp = n;
        int rev=0;
        while(n>0)
        {
           n=n%10;
           rev = rev*10 + n;
           n=n/10;
        }
        System.out.println(temp);
        System.out.println(rev);
        if(rev == temp){
            System.out.println("The number is a palindrome");
        }
        else
            System.out.println("The number is not a palindrome");
    }

}
