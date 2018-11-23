#include "task1.h"

double calcDelta_(Circle *a, Circle *b) {
    auto a_rad = a->getRadius(), b_rad = b->getRadius();
    if (a_rad >= b_rad) {
        return a->getRadius() - b->getRadius();
    } else {
        return b->getRadius() - a->getRadius();
    }
}

double calcDelta() {
    auto *a = new Circle(6378100);
    auto *b = new Circle();
    b->setFerence(a->getFerence() + 1);
    auto a_rad = a->getRadius(), b_rad = b->getRadius();
    if (a_rad >= b_rad) {
        double tmp = a->getRadius() - b->getRadius();
        delete a;
        delete b;
        return tmp;
    } else {
        double tmp =  b->getRadius() - a->getRadius();
        delete a;
        delete b;
        return tmp;
    }
}

double calcCost_(Circle *a, Circle *b) {
    auto a_rad = a->getRadius(), b_rad = b->getRadius();
    double sum_path = 1000, sum_fence = 2000, square = 0;
    if (a_rad >= b_rad) {
        square += a->getArea() - b->getArea();
        sum_fence *= a->getFerence();
    } else {
        square += b->getArea() - a->getArea();
        sum_fence *= b->getFerence();
    }
    sum_path *= square;
    return sum_path + sum_fence;
}

double calcCost() {
    auto *a = new Circle(3);
    auto *b = new Circle(4);
    auto a_rad = a->getRadius(), b_rad = b->getRadius();
    double sum_path = 1000, sum_fence = 2000, square = 0;
    if (a_rad >= b_rad) {
        square += a->getArea() - b->getArea();
        sum_fence *= a->getFerence();
    } else {
        square += b->getArea() - a->getArea();
        sum_fence *= b->getFerence();
    }
    sum_path *= square;
    delete a;
    delete b;
    return sum_path + sum_fence;
}
