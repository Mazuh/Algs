#include <iostream>
#include <cmath>

using namespace std;

int main(){

    // vars
    double xA, yA; // ponto A
    double xB, yB; // ponto B
    
    
    // input
    cin >> xA;
    cin >> yA;
    
    cin >> xB;
    cin >> yB;

    
    // output e cálculo de distância euclidiana entre os pontos:
    // o quadrado da distância entre dois pontos é igual à
    // soma dos quadrados das diferenças entre os valores de
    // eixo iguais.
    cout << sqrt(pow(xB - xA, 2) + pow(yB - yA, 2)) << endl;

}
