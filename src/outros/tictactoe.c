// Minha primeira experiência em C. Jogo TicTaToe compilado num prompt pra Windows.

// Incluindo as bibliotecas padrões básicas
// ("standard input and output" e "standard general library", respectivamente).
#include <stdio.h> // De onde vêm as funções printf e scanf.
#include <stdlib.h>
#include <locale.h> // Essa biblioteca será usada para definir o "idioma".

// Método main executável.
int main(){
  
  char nada = 0; // Só vai ser usado lá em uma das 5 últimas linha.
  
  // Aqui está a utilidade da locale.h.
  // Método de pura estética, usado pra exibir acentos e caracteres especiais
  // corretamente no console através dos métodos printf. No idioma inglês, não
  // há ~, Ž, ç ou coisas do tipo, então a maioria dos compiladores originais
  // não interpretam essa digitação especial ao ler o código.
  setlocale(LC_ALL, "Portuguese");
  
  // Introdução amigável ao jogo.
  printf("\n Olá, usuário!\n   Bem-vindo ao Jogo da Velha.\n\n");
  printf(" Se ainda NÃO sabe como jogar, tecle 1.\n");
  printf(" Caso já saiba, digite qualquer outra tecla para iniciar o jogo...");
  char exibirInfo = '0';
  exibirInfo = getch();
  if (exibirInfo == '1'){ // Caso o usuário digite 1...
     printf("\n\n  O tabuleiro possui três linhas e três colunas. Dois jogadores\n");
     printf(" escolhem uma marcação cada um, geralmente um círculo (O) e um\n");
     printf(" xis (X). Os jogadores jogam alternadamente, uma marcação por\n");
     printf(" vez, numa lacuna que esteja vazia. O objetivo é conseguir três\n");
     printf(" círculos ou três xis em linha, quer horizontal, vertical ou\n");
     printf(" diagonal e, ao mesmo tempo, quando possível, impedir o adversário\n");
     printf(" de ganhar na próxima jogada.\n\n ");
     system("pause");
  } // Caso contrário, ele prossegue a execução e inicia o jogo.
  
  // Para tornar o console menos poluído e um mínimo de organização,
  // essas uma destas duas funções serão usadas para limpar a tela frequentemente.
  // system("clear"); // Comando de limpar tela caso seja Linux.
  system("cls"); // Comando de limpar tela no Windows.

  // Declaração de variáveis vitais na execução do jogo.
  int i = 0, j = 0; // Para algum ocasional uso em loops.
  int linha, coluna; // Para tratar da leitura dos valores da matriz.
  char tabuleiro[4][4]; // Gerando matriz quadrada do tabuleiro, 3x3
                       // porque vamos inutilizar as posições [0][0]
                       // para facilitar o tratamento de valores entrados.
                       // OBS: PÉSSIMA técnica de programação, desgasto
                       // supérfluo de memória, porém irrelevante no
                       // desempenho deste app em especial.
  int ptX = 0, ptO = 0; // Variáveis inteiras para pontuações dos jogadores.
  int vez = 0; // Se "vez" possuir um valor par, será a vez do O, se for ímpar,
               // será a vez do X. Ou seja, essa variável controlará os turnos.
  char jogando = '1'; // Usando a variável "jogando" como booleana para controlar
                   // o loop abaixo.
                   
  while (jogando == '1'){
     
     system("cls"); // Limpa a tela, preparando-a para os novos dados a seguir.
     
     if (vez == 0){ // Se for a primeira vez...
        // Tabuleiro reiniciado e limpo.
        for (i = 1; i <= 3; i++){
            for(j = 1; j <= 3; j++){
              tabuleiro[i][j] = '_';
            }
        }
     }
     
     vez++; // Passar a vez sempre.
     
     // Exibir placar e status do jogo.
     printf("\n PLACAR:\n X %d x %d O\n", ptX, ptO);
     printf(" JOGADOR DESTA VEZ: ");
     if (vez % 2 == 0) // Caso o valor da vez seja par, é o turno do O.
        printf("O\n\n");
     else // Se não, será a vez do X.
        printf("X\n\n");
     
     // Exibir o tabuleiro.
     for (i = 1; i <= 3; i++){
        printf(" _%c_|_%c_|_%c_\n", tabuleiro[i][1], tabuleiro[i][2], tabuleiro[i][3]);
     }
     
     // Os três blocos condicionais a seguir servirão para verificar se o jogo
     // precisa ser reiniciado no caso de empate ou vitória de um dos jogadores.
     if ((tabuleiro[1][1]=='X' && tabuleiro[1][2]=='X' && tabuleiro[1][3]=='X')||
           (tabuleiro[2][1]=='X' && tabuleiro[2][2]=='X' && tabuleiro[2][3]=='X')||
           (tabuleiro[3][1]=='X' && tabuleiro[3][2]=='X' && tabuleiro[3][3]=='X')||
           (tabuleiro[1][1]=='X' && tabuleiro[2][1]=='X' && tabuleiro[3][1]=='X')||
           (tabuleiro[1][2]=='X' && tabuleiro[2][2]=='X' && tabuleiro[3][2]=='X')||
           (tabuleiro[1][3]=='X' && tabuleiro[2][3]=='X' && tabuleiro[3][3]=='X')||
           (tabuleiro[1][1]=='X' && tabuleiro[2][2]=='X' && tabuleiro[3][3]=='X')||
           (tabuleiro[1][3]=='X' && tabuleiro[2][2]=='X' && tabuleiro[3][1]=='X')){
           // Primeira alternativa: vitória do X.
        vez = 0; // Zera a vez para entrar na condição vez == 0 e reiniciar.
        ptX++;
        printf(" 'X' VENCEU!\nTecle 1 para criar uma nova partida.\n");
        jogando = getch(); // Caso digite algo além de 1, o loop maior irá
                           // levar um break implícito.
        continue; // Ignore todas as linhas seguintes do loop e volta à primeira.
     } else if ((tabuleiro[1][1]=='O' && tabuleiro[1][2]=='O' && tabuleiro[1][3]=='O')||
           (tabuleiro[2][1]=='O' && tabuleiro[2][2]=='O' && tabuleiro[2][3]=='O')||
           (tabuleiro[3][1]=='O' && tabuleiro[3][2]=='O' && tabuleiro[3][3]=='O')||
           (tabuleiro[1][1]=='O' && tabuleiro[2][1]=='O' && tabuleiro[3][1]=='O')||
           (tabuleiro[1][2]=='O' && tabuleiro[2][2]=='O' && tabuleiro[3][2]=='O')||
           (tabuleiro[1][3]=='O' && tabuleiro[2][3]=='O' && tabuleiro[3][3]=='O')||
           (tabuleiro[1][1]=='O' && tabuleiro[2][2]=='O' && tabuleiro[3][3]=='O')||
           (tabuleiro[1][3]=='O' && tabuleiro[2][2]=='O' && tabuleiro[3][1]=='O')) { 
            // Segunda possibilidade: vitória do O.
            // O bloco segue o mesmo padrão de utilidade que o anterior.
        vez = 0;
        ptO++;
        printf(" 'O' VENCEU!\nTecle 1 para criar uma nova partida.\n");
        jogando = getch();
        continue;
     } else if (vez > 9){ // Caso já tenha chegado a essa condicional, significa que
                          // indubitavelmente ocorreu um empate. Logo, reiniciar.
        vez = 0;
        printf(" EMPATE! ''Deu velha!''\nTecle 1 para criar uma nova partida.\n");
        jogando = getch();
        continue;
     }
     
     // Caso tenha passado despercebido pela verificação de resultados,
     // significa automaticamente que a partida ainda está rolando, portanto
     // que se inicie a próxima solicitação de dados.     
     printf("\n\n DEFININDO PRÓXIMA MARCAÇÃO.\n");
     while (1){ // A priori o loop será infinito e só tomará um break caso
                   // o usuário digite valores corretos. Se não, a solicitação
                   // permanecerá sendo feita.
        printf(" Linha: ");
        scanf("%d", &linha);
        printf(" Coluna: ");
        scanf("%d", &coluna);
        
        // Condicionais para filtrar valores incorretos.
        // Primeiro if, checar se os valores estão dentro dos limites da matriz.
        if ((coluna >= 1 && coluna <= 3) && (linha >= 1 && linha <= 3)){
           // Segundo if, checar se a lacuna especificada está vazia.
           if (tabuleiro[linha][coluna] == '_'){
              // Após devidamente filtrado pelas duas condicionais, se chegou
              // até aqui significa que está tudo bem e a marcação de X ou O
              // já pode ser feita no tabuleiro.
              if (vez % 2 == 0)
                 tabuleiro[linha][coluna] = 'O';
              else
                 tabuleiro[linha][coluna] = 'X';
              // Em seguida, um break no loop de entrada de dados e prosseguir.
              break;
           } else { // Caso a lacuna esteja ocupada, emitir um erro...
              printf(" Escolha uma lacuna vazia!\n\n");
           }
        } else { // Caso esteja fora dos limites da matriz, emitir um erro...
           printf(" Digite valores dentro dos limites do tabuleiro.\n\n");
        }
        
     }
     
  }
  
  // Fim de jogo.
  system("cls");
  printf("\n\n\tFIM DO JOGO!\n\n Aperte qualquer tecla para sair.\n Por: Mazuh");
  nada = getch();
  return 0;
  
}
