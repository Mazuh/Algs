#include <cmath>
#include "tridimensional.h"

/* RectangularPyramid */

RectangularPyramid::RectangularPyramid(double baseArea, double lateralArea, double height){
    this->baseArea = baseArea;
    this->lateralArea = lateralArea;
    this->height = height;
}

double RectangularPyramid::calcArea(){
    return baseArea + lateralArea;
}

double RectangularPyramid::calcVolume(){
    return (baseArea * height)/3;
}

/* Cube */

Cube::Cube(double edge){
    this->edge = edge;
}

double Cube::calcArea(){
    return edge * edge * 6;
}

double Cube::calcVolume(){
    return edge * edge * edge;
}

/* Parallelepiped */

Parallelepiped::Parallelepiped(double edge1, double edge2, double edge3){
    this->edge1 = edge1;
    this->edge2 = edge2;
    this->edge3 = edge3;
}

double Parallelepiped::calcArea(){
    return (2 * edge1 * edge2) + (2 * edge1 * edge3) + (2 * edge2 * edge3);
}

double Parallelepiped::calcVolume(){
    return edge1 * edge2 * edge3;
}

/* Sphere */

Sphere::Sphere(double radius){
    this->radius = radius;
}

double Sphere::calcArea(){
    return 4 * radius * radius * M_PI;
}

double Sphere::calcVolume(){
    return (calcArea() * radius)/3;
}
