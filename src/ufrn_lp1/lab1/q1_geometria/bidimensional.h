#ifndef BIDIMENSIONAL_H
#define BIDIMENSIONAL_H

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
 * @brief Figura fechada formada por três lados (congruentes entre si)
 */
class EquilateralTriangle: public BidimensionalEntity{
private:
    double side;
public:
    EquilateralTriangle(double side);
    virtual double calcPerimeter();
    virtual double calcArea();
};


/**
 * @brief Figura fechada formada por quatro lados que formam ângulos
 * retos (90o)
 */
class Rectangle: public BidimensionalEntity{
private:
    double base;
    double height;
public:
    Rectangle(double base, double height);
    virtual double calcPerimeter();
    virtual double calcArea();
};


 /**
 * @brief Figura fechada formada por quatro lados congruentes
 * (isto é, de medidas iguais) que formam ângulos retos
 */
class Square: public BidimensionalEntity{
private:
    double side;
public:
    Square(double side);
    virtual double calcPerimeter();
    virtual double calcArea();
};


 /**
 * @brief Figura fechada por uma linha curva chamada circunferência
 */
class Circle: public BidimensionalEntity{
private:
    double radius;
public:
    Circle(double radius);
    virtual double calcPerimeter();
    virtual double calcArea();
};

#endif
