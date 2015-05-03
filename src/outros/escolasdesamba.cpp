/*
Ler 10 escolas (nomes e média aritmética de notas)
(cada uma com 5 notas, mas a maior e menor são excluídas do cálculo)
e definir a campeã e vice-campeã ao final de tudo.
*/

#include <iostream>
#include <climits>

using namespace std;

int main(){

    // VARS
    string campea;
    string vice;
    bool temEmpate = false;
    float mediaDaCampea = INT_MIN;
    
    // INPUT de escolas
    cout << "Eae!" << endl;
    for (int i = 0; i < 10; i++){
        // INPUT DE NOME -----------------
        string nome;
        cout << "Nome da escola " << (i+1) << ": ";
        cin >> nome;
        
        // INPUT DE NOTAS e cálculo de média -----------
        float media = 0;
        // vars auxiliares
        float maiorNota = INT_MIN; 
        float menorNota = INT_MAX;
        // entradas e cálculos
        cout << "As 5 notas da '" << nome << "': ";
        for (int j = 0; j < 5; j++){
            // leitura da nota
            float nota;
            cin >> nota;
            
            // o cálculo de média requer a soma de todas as médias
            media += nota;
            
            // já vai definindo quais as maiores e menores notas.
            if (nota < menorNota){
                menorNota = nota;
            }
            if (nota > maiorNota){;
                maiorNota = nota;
            }
        }
        // subtrai a menor e a maior nota da soma
        media = media - menorNota - maiorNota;
        
        // cálcula a média (finalmente), agora com 3 valores.
        media = media / 3;
        
        // OUTPUT da média só de zoa
        cout << "Média: " << media << endl;
        
        // VERIFICANDO SITUAÇÃO DA CAMPEÃ E VICE -----------------
        if (media > mediaDaCampea){ // a campeã foi batida?
            mediaDaCampea = media; // nova média a ser batida!
            vice = campea; // quem era campeã, agora é vice
            campea = nome; // e quem não era nada, agora é campeã
        } else if (media == mediaDaCampea){
            temEmpate = true; // há empate.
        }
        
    } // fim do loop de escolas
    
    // OUTPUT
    if (temEmpate){
        cout << "Ocorreu um empate entre duas ou mais escolas.\n";
    }else{
        cout << "Campeã: " << campea << endl;
        cout << "Vice: " << vice << endl;
    }
    
    return 0; // flw!
}
