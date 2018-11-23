#include "Circle.h"

//#define M_PI 3.14

// Constructors

Circle::Circle() {
    radius = 0;
}

Circle::Circle(double r) {
    radius = r;
    ference = 2*M_PI*radius;
    area = M_PI*radius*radius;
}

// Destructor

Circle::~Circle() = default;

// Setters

void Circle::setRadius(double r) {
    radius = r;
    ference = 2*M_PI*radius;
    area = M_PI*radius*radius;
}

void Circle::setFerence(double f) {
    ference = f;
    radius = ference / 2 / M_PI;
    area = M_PI*radius*radius;
}

void Circle::setArea(double a) {
    area = a;
    radius = sqrt(area / M_PI);
    ference = 2*M_PI*radius;
}

// Getters

double Circle::getRadius() {
    return radius;
}

double Circle::getFerence() {
    return ference;
}

double Circle::getArea() {
    return area;
}

// Copiers

void Circle::copy_circle(Circle *c) {
    Circle::setRadius(c->getRadius());
    Circle::setFerence(c->getFerence());
    Circle::setArea(c->getArea());
}
