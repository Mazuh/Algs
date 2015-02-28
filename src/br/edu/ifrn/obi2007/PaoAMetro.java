package br.edu.ifrn.obi2007;

// http://olimpiada.ic.unicamp.br/pratique/programacao/nivel1/2007f2p1_metro

import java.util.Scanner;

public class PaoAMetro {
    
    public static void main(String[] args){
        
        Scanner input = new Scanner(System.in);
        
        // lendo quantidade de pessoas N
        System.out.print("Quantidade de pessoas: ");
        int n = input.nextInt();
        
        // lendo quantidade de sanduiches disponível K
        System.out.print("Quantidade de sanduiches disponível: ");
        int k = input.nextInt();
        
        // criando um int vetor de K medidas M[i] de sanduiches usando uma variável auxiliar
        System.out.println("Tamanhos de cada pedaço: ");
        input.nextLine();
        String mAux[] = input.nextLine().split(" ");
        
        int m[] = new int[k];
        for (int i = 0; i < k; i++){
            m[i] = Integer.valueOf(mAux[i]);
        }
        
        // descobre o tamanho máximo igual que todos os pedaços devem ter
        int mMaxCadaPedaco = 0;
        for (int i = 1; i <= 10000; i++){ // o índice será a medida de cada pedaço individual 
            // repartindo todos as medidas M em tamanhos I (índice de tentativas) 
            int qtdPedacosDoTeste = 0;
            for (int j = 0; j < k; j++)
                qtdPedacosDoTeste += m[j] / i; // contando quantas partes ficaram para todos os participantes
            
            // a quantidade de pedaços deve ser a maior possível em que ainda assim o número de
            // pedaços seja igual ao de pessoas.
            if (qtdPedacosDoTeste < n){ // se o índice passar direto (começar a faltar pedaços pra pessoas)...
                mMaxCadaPedaco = i - 1; //... é só voltar ao antecessor e acabar as buscas.
                break;
            }
        }
        
        System.out.println("\nMedida máxima de cada pedaço: " + mMaxCadaPedaco);
        
    }
    
}
