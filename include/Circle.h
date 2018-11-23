//
// Created by Артем Аросланкин on 23/11/2018.
//

#ifndef UNTITLED7_CIRCLE_H
#define UNTITLED7_CIRCLE_H


#include <iostream>
#include <cmath>

class Circle
{
private:
    double radius;
    double ference;
    double area;
public:
    Circle();
    Circle(double radius);
    void setRadius(double radius);
    void setFerence(double ference);
    void setArea(double area);
    double getRadius() const;
    double getFerence() const;
    double getArea() const;
};


#endif //UNTITLED7_CIRCLE_H
