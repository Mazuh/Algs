package br.edu.ifrn;

import java.util.Scanner;

public class DistanciaEuclidiana {
    
    public static void main(String[] args){
        
        Scanner input = new Scanner(System.in);
        double x1, y1, x2, y2;
        
        String[] entradas = input.nextLine().split(" ");
        x1 = Double.valueOf(entradas[0]);
        y1 = Double.valueOf(entradas[1]);
        x2 = Double.valueOf(entradas[2]);
        y2 = Double.valueOf(entradas[3]);
        
        double distancia = Math.sqrt(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2));
        
        System.out.println(distancia);
        
    }
    
    public static double distancia(double x1, double y1, double x2, double y2){
        return Math.sqrt(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2));
    }
   
}
