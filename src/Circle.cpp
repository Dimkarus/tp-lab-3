#include "Circle.h"

// Constructors

Circle::Circle() {
    radius = 0;
}

Circle::Circle(double r) {
    radius = r;
    ference = 2*M_PI*radius;
    area = M_PI*radius*radius;
}

// Setters

void Circle::set_radius(double r) {
    radius = r;
    ference = 2*M_PI*radius;
    area = M_PI*radius*radius;
}

void Circle::set_ference(double f) {
    ference = f;
    radius = ference / 2 / M_PI;
    area = M_PI*radius*radius;
}

void Circle::set_area(double a) {
    area = a;
    radius = sqrt(area / M_PI);
    ference = 2*M_PI*radius;
}

// Getters

double Circle::get_radius() {
    return Circle::radius;
}

double Circle::get_ference() {
    return Circle::ference;
}

double Circle::get_area() {
    return Circle::area;
}

// Copiers

void Circle::copy_circle(Circle *c) {
    Circle::set_radius(c->get_radius());
    Circle::set_ference(c->get_ference());
    Circle::set_area(c->get_area());
}
