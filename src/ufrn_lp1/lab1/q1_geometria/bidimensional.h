#ifndef BIDIMENSIONAL_H
#define BIDIMENSIONAL_H

#include "geometryabstract.h"

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
