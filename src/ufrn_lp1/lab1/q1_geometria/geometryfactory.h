#ifndef GEOMETRYFACTORY_H
#define GEOMETRYFACTORY_H

#include "geometryabstract.h"


/**
 * @brief Opções de objetos bidimensionais para solicitar à fábrica
 */
enum BidimensionalEntities{
    EQUILATERAL_TRIANGLE = 1,
    RECTANGLE,
    SQUARE,
    CIRCLE
};


/**
 * @brief Opções de objetos tridimensionais para solicitar à fábrica
 */
enum TridimensionalEntities{
    RECTANGULAR_PYRAMID = 1,
    CUBE,
    PARALLELEPIPED,
    SPHERE
};


/**
 * @brief Cria facilmente instâncias de figuras geométricas através de
 * uma interface por linha de comando (cli)
 */
class GeometryFactory{
private:
    GeometryFactory();
public:

    /**
     * @brief Inicia a interação e persiste até que o usuário saia, compilando
     * toda a rotina: mostra opções de criação, os cria e imprime os cálculos
     */
    static void runCli();
    
    /**
     * @brief Questiona ao usuário os atributos para criação da instância da
     * figura geométrica espacial escolhida
     */
    static TridimensionalEntity *prompt3DCreation(TridimensionalEntities choice);
    
    /**
     * @brief Questiona ao usuário os atributos para criação da instância da
     * figura geométrica plana escolhida
     */
    static BidimensionalEntity *prompt2DCreation(BidimensionalEntities choice);
};

#endif