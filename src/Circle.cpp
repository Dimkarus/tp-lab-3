#include "Circle.h"
#include <cmath>

double calcFerence (double radius){
    return 2 * M_PI * radius;
}

double calcArea (double radius){
    return M_PI * radius * radius;
}

Circle::Circle (double radius){
    this -> radius = radius;
    this -> ference = calcFerence (radius);
    this -> area = calcArea (radius);
}

void Circle::setRadius (double radius){
    this -> radius = radius;
    this -> ference = calcFerence (radius);
    this -> area = calcArea (radius);
}

void Circle::setFerence(double ference) {
    this -> ference = ference;
    this -> radius = ference/(2 * M_PI);
    this -> area = calcArea (radius);
}

void Circle::setArea (double area) {
    this -> area = area;
    this -> radius = sqrt(area/M_PI);
    this -> ference = calcFerence (radius);
}

double Circle::getRadius(){
    return this -> radius;
}

double Circle::getFerence(){
    return this -> ference;
}

double Circle::getArea(){
    return this -> area;
}