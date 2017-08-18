#ifndef GEOMETRYABSTRACT_H
#define GEOMETRYABSTRACT_H

/**
 * @brief Definição base de todas as figuras planas.
 */
class BidimensionalEntity{
public:
    /**
     * @brief Usa os atributos da figura pra calcular sua área 
     * e retorna o resultado
     */
    virtual double calcArea() = 0;
    
    /**
     * @brief Usa os atributos da figura pra calcular seu perímetro
     * e retorna o resultado
     */
    virtual double calcPerimeter() = 0;
};


/**
 * @brief Definição base de todas as figuras espaciais
 */
class TridimensionalEntity{
public:
    /**
     * @brief Usa os atributos do corpo pra calcular sua área de superfície 
     * das faces e retorna o resultado
     */
    virtual double calcArea() = 0;
    
    /**
     * @brief Usa os atributos do corpo pra calcular seu volume
     */
    virtual double calcVolume() = 0;
};

#endif
