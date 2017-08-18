#ifndef GEOMETRYFACTORY_H
#define GEOMETRYFACTORY_H

#include "geometryabstract.h"
#include "bidimensional.h"
#include "tridimensional.h"

/**
 * @brief Opções de objetos bidimensionais para solicitar à fábrica
 */
enum class BidimensionalEntities{
    EQUILATERAL_TRIANGLE,
    RECTANGLE,
    SQUARE,
    CIRCLE
};

/**
 * @brief Opções de objetos tridimensionais para solicitar à fábrica
 */
enum class TridimensionalEntities{
    RECTANGULAR_PYRAMID,
    CUBE,
    PARALLELEPIPED,
    SPHERE
};

/**
 * @brief Cria facilmente instâncias de figuras geométricas através de
 * uma interface por linha de comando (cli).
 */
class GeometryFactory{
public:
    /**
     * @brief Inicia a interação e persiste até que o usuário saia, compilando
     * toda a rotina: mostra opções, cria objetos e imprime os cálculos.
     */
    static void runCli();

    /**
     * @brief Mostra as opções para a dimensão do espaço do objeto geométrico,
     * onde cada opção tem
     */
    static TridimensionalEntities promptMenuSelection();
    
    /**
     * @brief Abre perguntas a criação de instância de figura geométrica plana
     */
    static TridimensionalEntity *promptTridimensionalCreation(TridimensionalEntities choice);
    
    /**
     * @brief Abre perguntas a criação de instância de figura geométrica plana
     */
    static BidimensionalEntity *promptBidimensionalCreation(BidimensionalEntities choice);
};

#endif