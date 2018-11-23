//
// Created by Артем Аросланкин on 23/11/2018.
//

#include "task1.h"

double calcDelta(){
    Circle c1(6378.1);
    c1.setFerence(c1.getFerence() + 0.001);
    double gap = (c1.getRadius() - 6378.1) * 1000.0;
    return gap;
}

double calcCost(){
    Circle c1(3.0), c2(4.0);
    double cost = (c2.getArea()-c1.getArea()) * 1000.0 + c2.getFerence() * 2000.0;
    return cost;
}