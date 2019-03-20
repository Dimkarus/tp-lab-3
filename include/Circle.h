//
// Created by Alexander on 06.03.2019.
//

#pragma once
#include <iostream>

using namespace std;


class Circle{
private:
    double radius, ference, area;
public:
    double pi = 3.14;
    explicit Circle(double rad)
    {
        radius = rad;
        ference = 2 * pi * radius;
        area = pi * radius * radius;
    }
    void setRadius(double radius);
    void setFerence(double ference);
    void setArea(double area);
    double getRadius();
    double getFerence();
    double getArea();
};
