//
// Created by Артем Аросланкин on 14/11/2018.
//

#include "Circle.h"

Circle::Circle() {
    this->setRadius(0);
}


Circle::Circle(double radius) {
    this->setRadius(radius);
}

void Circle::setRadius(double radius) {
    this->radius = radius;
    this->ference = M_PI * 2.0 * radius;
    this->area = M_PI * radius * radius;
}

void Circle::setFerence(double ference) {
    this->radius = ference / (2.0 * M_PI);
    this->ference = ference;
    this->area = M_PI * radius * radius;
}


void Circle::setArea(double area) {
    this->radius = sqrt(area) / M_PI;
    this->ference = M_PI * 2 * radius;
    this->area = area;
}

double Circle::getRadius() const {
    return this->radius;
}

double Circle::getFerence() const {
    return this->ference;
}

double Circle::getArea() const {
    return this->area;
}
