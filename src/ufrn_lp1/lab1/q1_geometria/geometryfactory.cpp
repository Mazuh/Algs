#include <iostream>
#include <stdlib.h>
#include "geometryfactory.h"
#include "geometryabstract.h"
#include "bidimensional.h"
#include "tridimensional.h"

using std::cin;
using std::cout;
using std::endl;

void GeometryFactory::runCli(){
    int dimensionChoice, figureChoice;
    
    do {
        system("cls || clear");
        
        cout << "CALCULADORA DE FIGURAS GEOMÉTRICAS" << endl
             << "0 - Sair" << endl
             << "1 - Figura Plana" << endl
             << "2 - Corpo Espacial" << endl
             << endl
             << "Sua opção: ";
        cin >> dimensionChoice;
        
        if (dimensionChoice == 1){
            cout << endl << "(CRIANDO FIGURA PLANA)" << endl
                 << static_cast<int>(BidimensionalEntities::EQUILATERAL_TRIANGLE)
                 << " - Triângulo equilátero" << endl
                 << static_cast<int>(BidimensionalEntities::RECTANGLE)
                 << " - Triângulo equilátero" << endl
                 << static_cast<int>(BidimensionalEntities::SQUARE)
                 << " - Triângulo equilátero" << endl
                 << static_cast<int>(BidimensionalEntities::CIRCLE)
                 << " - Triângulo equilátero" << endl
                 << endl
                 << "Sua opção: ";
            cin >> figureChoice;
            
            
        } else if (dimensionChoice == 2){
            cout << endl << "(CRIANDO FIGURA ESPACIAL)" << endl
                 << "(ESPACIAIS)" << endl
                 << static_cast<int>(TridimensionalEntities::RECTANGULAR_PYRAMID)
                 << " - Triângulo equilátero" << endl
                 << static_cast<int>(TridimensionalEntities::CUBE)
                 << " - Triângulo equilátero" << endl
                 << static_cast<int>(TridimensionalEntities::PARALLELEPIPED)
                 << " - Triângulo equilátero" << endl
                 << static_cast<int>(TridimensionalEntities::SPHERE)
                 << " - Triângulo equilátero"  << endl
                 << endl
                 << "Sua opção: ";
            cin >> figureChoice;
        }

    } while(dimensionChoice);
}
