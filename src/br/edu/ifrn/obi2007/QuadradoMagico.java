package br.edu.ifrn.obi2007;

import java.util.ArrayList;
import java.util.Scanner;

public class QuadradoMagico {
    
    public static void main(String[] args){
        
        Scanner input = new Scanner(System.in);
        
        int n = input.nextInt(); // tamanho
        int matriz[][] = new int[n][n];
        
        System.out.println();
        
        for (int i = 0; i < n; i++){
            String linhaAux[] = (input.nextLine()).split(" ");
            
            for (int j = 0; j < n; j++){
                matriz[i][j] = Integer.valueOf(linhaAux[j]);
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
