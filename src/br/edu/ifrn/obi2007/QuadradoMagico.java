package br.edu.ifrn.obi2007;

import java.util.ArrayList;
import java.util.Scanner;

public class QuadradoMagico {
    
    public static void main(String[] args){
        
        Scanner input = new Scanner(System.in);
        
        int n = input.nextInt(); // tamanho
        
        Integer[][] matrizInt = new Integer[n][n];
        int matriz[][] = new int[n][n];
        
        System.out.println();
        
        for (int i = 0; i < n; i++){
            
            String linhaLidaStr = input.nextLine();
            String[] linhaLida = linhaLidaStr.split(" ");
            
            for (int j = 0; j < n; j++){
                matrizInt[i][j] = Integer.valueOf(linhaLida[j]);
            }
        }
        
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                System.out.print(matriz[i][j]);
            }
            System.out.println();
        }
        
    }
    
}
