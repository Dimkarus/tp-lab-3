//
// Created by Константин Чернышев on 21.11.18.
//

#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H


#include <cmath>

class Circle {
private:
    double radius;
    double ference;
    double area;

public:
    Circle();
    Circle(double radius);
    void setRadius(double radius);
    const double getRadius() const;
    void setFerence(double ference);
    const double getFerence() const;
    void setArea(double area);
    const double getArea() const;
};


#endif //TASK1_CIRCLE_H
