package br.edu.ifrn.obi2007;

// http://olimpiada.ic.unicamp.br/pratique/programacao/nivel1/2007f1p1_perdida

import java.util.Arrays;
import java.util.Scanner;


public class PecaPerdida {
    
    public static void main(String[] args){
        
        Scanner input = new Scanner(System.in);
        
        // ENTRADA DE DADOS
        System.out.print("ENTRADA\nQuantidade de peças: ");
        int n = Integer.valueOf(input.nextLine());
        System.out.print("Peças: ");
        String entradaDePecas = input.nextLine();
        
        if (entradaDePecas.length() > n) System.exit(0); // ERRO
        
        String[] pecas = entradaDePecas.split(" ");
        
        Arrays.sort(pecas);
        
        // SAÍDA
        // ... INCOMPLETO
        
    }
    
}
