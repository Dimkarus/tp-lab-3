//
// Created by Alexander on 06.03.2019.
//
#include "Circle.h"
#include "cmath"

double Circle::getArea() {
    return area;
}


double Circle::getFerence(){
    return ference;
}

double Circle::getRadius(){
    return radius;
}

void Circle::setArea(double ar) {
    this->area = ar;
    this->radius = sqrt(area/pi);
    this->ference = 2*pi*radius;
}

void Circle::setFerence(double fer){
    this->ference = fer;
    this->radius = ference/(2*pi);
    this->area = pi*radius*radius;
}

void Circle::setRadius(double rad){
    this->radius = rad;
    this->area = pi*radius*radius;
    this->ference = 2*pi*radius;
}