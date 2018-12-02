#include "task1.h"

double calcDelta(){

    double rE = 6378.1 * 1000;
    auto *Earth = new Circle(rE);
    Earth -> setFerence(Earth -> getFerence() + 1);

    return Earth -> getRadius() - rE;

}

double calcCost(){

    double pr1 = 1000, pr2 = 2000;
    auto *Circle1 = new Circle(4.), *Circle2 = new Circle(3.);

    return (Circle1 -> getArea() - Circle2 -> getArea()) * pr1 + Circle1 -> getFerence() * pr2;

}