package br.edu.ifrn.obi2012;

// http://olimpiada.ic.unicamp.br/pdf/provas/ProvaOBI2012_prog_f1nj.pdf

import java.util.Scanner;

public class Campeonato {
    public static void main(String[] args){
        
        Scanner input = new Scanner(System.in);
        
        String[] entradas = input.nextLine().split(" ");

        int cVitorias = Integer.valueOf(entradas[0]);
        int cEmpates = Integer.valueOf(entradas[1]);
        int cGols = Integer.valueOf(entradas[2]);
        int fVitorias = Integer.valueOf(entradas[3]);
        int fEmpates = Integer.valueOf(entradas[4]);
        int fGols = Integer.valueOf(entradas[5]);
        
        int cPontos = cVitorias * 3 + cEmpates;
        int fPontos = fVitorias * 3 + fEmpates;
        
        String saida = cPontos == fPontos ? (cGols == fGols ? "=" : (cGols > fGols ? "C" : "F")) : (cPontos > fPontos ? "C" : "F");
        
        System.out.println(saida);
        
    }
}
