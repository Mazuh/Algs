/*
http://www.rioinfo.com.br/media/uploads/prova-eliminatoria.pdf
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    char poltronas[3][21][20]; // [sala][fileira][poltrona] considerando índices iniciando em 0
    // a contagem dos índices da matriz começa em 0 ao invés de 1, então
    // ocasionalmente os valores legíveis do usuário são decrescidos em 1
    // para ser convertido em índice aceitado pela matriz. Segue a função:
    // 
    // início da contagem do programa = início da contagem humana - 1
    // pois:
    // 0 = 1 - 1
    
    // flag pra identificar a poltrona ocupada da matriz
    const char OCUPADA = 'x';
    
    
    // TESTE ------------------------------------------------------------------
    // INPUTS
    poltronas[1][4][0] = OCUPADA; // para o usuário é igual às entradas: 2 E 1
    poltronas[1][4][1] = OCUPADA; // para o usuário é igual às entradas: 2 E 2
    // OUTPUTS
    // a mais próxima que ele encontra uma das entradas acima forem feitas,
    // a saída (livre encontrada mais próxima encontrada) será: E3
    // -------------------------------------------------------------------------
    
    // 'dicionário' de fileiras
    char fileiras[] = {'A', 'B', 'C', 'D', 'E',
                       'F', 'G', 'H', 'I', 'J',
                       'K', 'L', 'M', 'N', 'O',
                       'P', 'Q', 'R', 'S', 'T',
                       'U'};
    
    // limites do bloco menor
    const int MAX_POLTRONA_BLOCO_MENOR = 4 - 1, // intervalo fechado de de A até E
              MAX_FILEIRA_BLOCO_MENOR = 8 - 1; // intervalo fechado de de 1 até 8
    // limites de cada sala, incluindo blocos maiores e menores (ignorando limites do menor)
    const int MAX_POLTRONA = 21 - 1, // intervalo fechado de A até U
              MAX_FILEIRA = 20 - 1; // intervalo fechado de 1 até 20
    
    
    // entrada de parâmetros
    int n_sala, n_poltrona;
    //int n_fileira;
    char fileira;

    // valores de entrada devem ser compatíveis com o desenho do enunciado do problema
    cin >> n_sala;
    cin >> fileira;
    cin >> n_poltrona;

    n_sala = n_sala - 1;
    n_poltrona = n_poltrona - 1;
    
    
    // descobrindo valor numérico da fileira
    for (int i = 0; i <= MAX_FILEIRA; i++){
        // sempre checando se a fileira corresponde à letra
        if (fileira == fileiras[i]){
            
            // encontrou a fileira, verifica se tá marcada como ocupada
            if (poltronas[n_sala][i][n_poltrona] == OCUPADA){
                // está marcada como ocupada: procura a mais próxima que estiver vaga
                
                // antes localiza limites desta fileira
                int max_desta_fileira;
                if (i <= MAX_POLTRONA_BLOCO_MENOR){
                    max_desta_fileira = MAX_FILEIRA_BLOCO_MENOR;
                } else{
                    max_desta_fileira = MAX_FILEIRA;
                }
                
                // depois procura a vaga em ambas as direções
                for (int j = 1; j <= max_desta_fileira; j++){
                    
                    // supõe índices para ambas as direções
                    int poltrona_esquerda = n_poltrona - j;
                    int poltrona_direita = n_poltrona + j;
                    
                    // se tá nos limites da esquerda, checa se tá vaga
                    if (poltrona_esquerda >= 0){
                        if (poltronas[n_sala][i][poltrona_esquerda] != OCUPADA){
                            // não tá ocupada ainda!
                            poltronas[n_sala][i][poltrona_esquerda] = OCUPADA;
                            poltrona_esquerda = poltrona_esquerda + 1; // legível de novo
                            // output
                            cout << "Poltrona próxima " << fileiras[i] << poltrona_esquerda;
                            cout << " encontrada vaga e agora foi ocupada.\n";
                            return 0;
                        }
                    }
                    
                    // se tá nos limites da direita, checa se tá vaga
                    if (poltrona_direita <= max_desta_fileira){
                        if (poltronas[n_sala][i][poltrona_direita] != OCUPADA){
                            // não tá ocupada ainda!
                            poltronas[n_sala][i][poltrona_direita] = OCUPADA;
                            poltrona_direita = poltrona_direita + 1; // legível de novo
                            // output
                            cout << "Poltrona próxima " << fileiras[i] << poltrona_direita;
                            cout << " encontrada vaga e agora foi ocupada.\n";
                            return 0;
                            
                        }
                    }
                    
                }
                
                // terminou o loop e ainda não achou poltrona vaga?
                // então não tem vaga disponível nesta fileira
                cout << "Nenhuma poltrona vaga foi encontrada nesta fileira.\n";
                return 1;
                
            } else{
                // não está marcada como ocupada, logo está vaga: marcar!
                poltronas[n_sala][i][n_poltrona] = OCUPADA;
                n_poltrona = n_poltrona + 1; // tornar legível novamente ao usuário
                cout << "Poltrona " << fileiras[i] << n_poltrona << " agora foi ocupada.\n";
                return 0; // fim
            }
            
        }
    }
    
    cout << "Erro: a fileira não foi encontrada.\n";
    return 1;
}
