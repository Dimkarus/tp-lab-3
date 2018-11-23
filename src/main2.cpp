//
// Created by Константин Чернышев on 21.11.18.
//


#import "Circle.h"
#import <iostream>


int main() {

    Circle circle;
    circle.setRadius(3.);

    std::cout << circle.getFerence() * 2000 << " - ogr" << std::endl;

    double s1, s2;
    s1 = circle.getArea();
    circle.setRadius(3. + 1.);
    s2 = circle.getArea();

    std::cout << (s2 - s1) * 1000 << " - pokr" << std::endl;

    return 0;
}