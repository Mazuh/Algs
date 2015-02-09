package br.edu.ifrn.obi2007;

/*
 * http://olimpiada.ic.unicamp.br/pratique/programacao/nivel1/2007f1p1_colisoes
 */

import java.util.Scanner;

public class DetectandoColisoes {

    public static void main(String[] args){
        
        // Variáveis
        Scanner input = new Scanner(System.in);
        int x0, y0, x1, y1; // primeiro retângulo
        int X0, Y0, X1, Y1; // segundo retângulo
        boolean colideX = false;
        boolean colideY = false;
        int saida = 1;
        
        // Entrada
        System.out.print("ENTRADA\n"
                + "Primeiro retângulo: ");
        String rect1 = input.nextLine();
        System.out.print("Segundo retângulo: ");
        String rect2 = input.nextLine();
        
        // Quebrando entrada
        String dados[] = rect1.split(" ");
        String dados2[] = rect2.split(" ");
        
        // Definindo formas geométricas
        // Primeiro retângulo
        x0 = Integer.valueOf(dados[0]);
        y0 = Integer.valueOf(dados[1]);
        x1 = Integer.valueOf(dados[2]);
        y1 = Integer.valueOf(dados[3]);
        
        // Segundo retângulo
        X0 = Integer.valueOf(dados2[0]);
        Y0 = Integer.valueOf(dados2[1]);
        X1 = Integer.valueOf(dados2[2]);
        Y1 = Integer.valueOf(dados2[3]);
        
        // Verifica se está fora.
        if ((X1 <= x0) || (X0 >= x1) || (Y0 >= y1) || (Y1 <= y0)){
            saida = 0;
        } else{
            saida = 1;
        }
        
        System.out.println("\n\nSAÍDA: " + saida);
        
    }
    
}
