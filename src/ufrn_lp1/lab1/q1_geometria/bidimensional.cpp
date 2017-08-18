#include <math.h>
#include "bidimensional.h"

/* Triangle */

EquilateralTriangle::EquilateralTriangle(double side){
    this->side = side;
}

double EquilateralTriangle::calcArea(){
    return (side * side)/2;
}

double EquilateralTriangle::calcPerimeter(){
    return 3 * side;
}

/* Rectangle */

Rectangle::Rectangle(double base, double height){
    this->base = base;
    this->height = height;
}

double Rectangle::calcArea(){
    return base * height;
}

double Rectangle::calcPerimeter(){
    return 2 * (base + height);
}


/* Square */

Square::Square(double side){
    this->side = side;
}

double Square::calcArea(){
    return side * side;
}

double Square::calcPerimeter(){
    return 4 * side;
}

/* Circle */

Circle::Circle(double radius){
    this->radius = radius;
}

double Circle::calcArea(){
    return M_PI * radius * radius;
}

double Circle::calcPerimeter(){
    return 2 * M_PI * radius;
}
