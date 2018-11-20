#include <iostream>
#include "Circle.h"

int main() {
    // working in meters
    auto earth = new Circle(6378100), big_earth = new Circle();
    big_earth->copy_circle(earth);
    big_earth->set_ference(big_earth->get_ference() + 1);
    double diff = big_earth->get_radius() - earth->get_radius();
    std::cout << diff << std::endl;
}
