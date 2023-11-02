
import java.util.Scanner;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author student
 */
public class Array {
    int arr[] = new int [10];
    int largest, sum = 0, temp;
    
    void input(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 10 elements of array");
        for(int i=0;i<10;i++){
            arr[i] = sc.nextInt();
            sum += arr[i];
            if(arr[i]>largest)
                largest = arr[i];
        }
    }
    
    void display(){
        for(int j=0;j<10;j++){
            System.out.print(arr[j]+" ");
        }
        System.out.println();
    }
    
    void Large(){
        System.out.println("Largest element is: "+largest);
    }
    
    void average(){
        float average = sum/10;
        System.out.println("Average is: "+average);
    }
    
    void sort(){
        for(int i=0;i<10;i++){
            for(int j=1; j < (10-i); j++){  
                if(arr[j-1] > arr[j]){
                    temp = arr[j-1];  
                    arr[j-1] = arr[j];  
                    arr[j] = temp;  
               }
            }
        }
    }
    
    public static void main(String args[]){
        Array a = new Array();
        a.input();
        a.display();
        a.Large();
        a.average();
        a.sort();
        a.display();
    }
    
}
