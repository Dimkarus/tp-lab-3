#include <iostream>
#include "Circle.h"

int main() {
    // working in meters
    auto radius_outer = new Circle(4), radius_inner = new Circle(3);
    auto sum_concrete = (radius_outer->get_area() - radius_inner->get_area()) * 1000;
    auto sum_fence = radius_outer->get_ference() * 2000;
    auto sum_total = sum_concrete + sum_fence;
    std::cout << sum_total << std:: endl;
}
