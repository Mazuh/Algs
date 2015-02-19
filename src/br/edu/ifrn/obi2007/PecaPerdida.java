package br.edu.ifrn.obi2007;

// http://olimpiada.ic.unicamp.br/pratique/programacao/nivel1/2007f1p1_perdida

import java.util.Arrays;
import java.util.Scanner;


public class PecaPerdida {
    
    public static void main(String[] args){
        
        Scanner input = new Scanner(System.in);
        
        // ENTRADA DE DADOS
        System.out.print("ENTRADA\nQuantidade de peças: ");
        int n = Integer.valueOf(input.nextLine()); // um inteiro N
        System.out.print("Peças: ");
        String entradaDePecas = input.nextLine(); // N-1 valores inteiros 
        
        String[] pecas = entradaDePecas.split(" "); // quebrando entrada em um vetor
        
        Arrays.sort(pecas); // ordenando peças
        
        // SAÍDA
        for(int i = 0; i < pecas.length; i++){
            if (Integer.valueOf(pecas[i]) != i+1){
                System.out.println(i+1);
                break;
            }
        }
        
    }
    
}
