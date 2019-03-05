//
// Created by dlots on 13.02.19.
//

#pragma once
#include <iostream>
#include <math.h>
using namespace std;
#define pi 3.1415

//void foo();
class Circle{
private:
    double radius;
    double ference;
    double area;
public:
    Circle(double);
    void setRadius(double rad);
    void setFerence(double fer);
    void setArea(double ar);
    double getRadius();
    double getFerence();
    double getArea();
    void printself();
};
