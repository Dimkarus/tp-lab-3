//
// Created by dlots on 13.02.19.
//

#include "Circle.h"

/*void foo() {
    cout << "ok";
}*/

Circle::Circle(double rad) {
    setRadius(rad);
}
//fafggadg
void Circle::setRadius(double rad) {
    radius = rad;
    ference = 2*pi*radius;
    area = pi*radius*radius;
}

void Circle::setFerence(double fer) {
    ference = fer;
    radius = ference/2/pi;
    area = pi*radius*radius;
}

void Circle::setArea(double ar) {
    area = ar;
    radius = sqrt(area/pi);
    ference = 2*radius*pi;
}

double Circle::getRadius() {
    return radius;

}

double Circle::getFerence() {
    return ference;

}

double Circle::getArea() {
    return area;

}

void Circle::printself() {
    cout << "radius is " <<  getRadius() << "\n";
    cout << "ference is " <<  getFerence() << "\n";
    cout << "area is " <<  getArea() << "\n";
}
