#include <iostream>
#include <cstdio>
#include "task1.h"

int main() {
    // working in meters
//    auto earth = new Circle(6378100), big_earth = new Circle();
//    big_earth->copy_circle(earth);
//    big_earth->set_ference(big_earth->get_ference() + 1);
//    std::cout << calcDelta(earth, big_earth) << std::endl;
//    printf("%.2f\n", calcDelta(earth, big_earth));
//    delete earth;
//    delete big_earth;

    Circle c(10.0);
    std::cout << c.getFerence() << std::endl;
//    printf("%.2f\n", c.get_ference());
//    printf("%lf\n", calcDelta());

    return 0;
}
