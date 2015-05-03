// http://olimpiada.ic.unicamp.br/pdf/provas/ProvaOBI2012_prog_f1nj.pdf

#include <iostream>

using namespace std;

int main() {
    
    // dados do time C
    int cPontos;
    int cVitorias, cEmpates, cGols;
    
    // dados do time F
    int fPontos;
    int fVitorias, fEmpates, fGols;

    
    // inputs
    cin >> cVitorias;
    cin >> cEmpates;
    cin >> cGols;
        
    cin >> fVitorias;
    cin >> fEmpates;
    cin >> fGols;

    
    // cálculo de pontos
    cPontos = cVitorias * 3 + cEmpates;
    fPontos = fVitorias * 3 + fEmpates;

    
    // output de vencedor.
    // O vencedor é o que tiver maior pontos.
    // Se os pontos forem iguais, a decisão é de quem tiver maior gols.
    cout << (
        
        (cPontos == fPontos) ? // if (empate de pontos)
            
            // then decisão por pontos inviável: checar gols
            (cGols == fGols ? // o empate também é de gols?
                "="
             : // gols diferentes, então maior ngols vence
                (cGols > fGols ? "C" : "F"))
        
        : // if not (empate de pontos)

            // then decisão por pontos é possível: o maior vence
            (cPontos > fPontos ? "C" : "F")
        
    ) << endl; // fim do cout

    
    return 0;

}
