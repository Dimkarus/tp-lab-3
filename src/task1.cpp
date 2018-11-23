#include "task1.h"

double calcDelta_(Circle *a, Circle *b) {
    auto a_rad = a->get_radius(), b_rad = b->get_radius();
    if (a_rad >= b_rad) {
        return a->get_radius() - b->get_radius();
    } else {
        return b->get_radius() - a->get_radius();
    }
}


double calcDelta() {
    auto *a = new Circle(6378100);
    auto *b = new Circle();
    b->set_ference(a->get_ference() + 1);
    auto a_rad = a->get_radius(), b_rad = b->get_radius();
    if (a_rad >= b_rad) {
        double tmp = a->get_radius() - b->get_radius();
        delete a;
        delete b;
        return tmp;
    } else {
        double tmp =  b->get_radius() - a->get_radius();
        delete a;
        delete b;
        return tmp;
    }
}

double calcCost_(Circle *a, Circle *b) {
    auto a_rad = a->get_radius(), b_rad = b->get_radius();
    double sum_path = 1000, sum_fence = 2000, square = 0;
    if (a_rad >= b_rad) {
        square += a->get_area() - b->get_area();
        sum_fence *= a->get_ference();
    } else {
        square += b->get_area() - a->get_area();
        sum_fence *= b->get_ference();
    }
    sum_path *= square;
    return sum_path + sum_fence;
}

double calcCost() {
    auto *a = new Circle(3);
    auto *b = new Circle(4);
    auto a_rad = a->get_radius(), b_rad = b->get_radius();
    double sum_path = 1000, sum_fence = 2000, square = 0;
    if (a_rad >= b_rad) {
        square += a->get_area() - b->get_area();
        sum_fence *= a->get_ference();
    } else {
        square += b->get_area() - a->get_area();
        sum_fence *= b->get_ference();
    }
    sum_path *= square;
    delete a;
    delete b;
    return sum_path + sum_fence;
}
