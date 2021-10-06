package belajar02;

import static java.lang.System.out;
import java.util.Scanner;


public class Belajar02 {

    public static void main(String[] args) {
        T02();
    }
    
    // definisi, tanpa perlu deklarasi
    static void T01(){
	
        out.println("Hello World");
        // jelaskan perbedaan out.println dengan out.print
    }
    
    static void T02(){
        String nama;
	int usia;
        Scanner in = new Scanner(System.in);
        
	out.print("Nama Anda? ");
	nama = in.nextLine(); 
	out.println("Hello, " + nama + " !");
	
	out.print("Berapa usia anda? ");
	usia = in.nextInt();
        out.printf("Usia yang anda input : %d \n", usia);
    }
}
