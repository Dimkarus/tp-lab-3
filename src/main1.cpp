//
// Created by Константин Чернышев on 21.11.18.
//


#import "Circle.h"
#import <iostream>


int main() {
    Circle circle;
    circle.setRadius(6378.1);
    circle.setFerence(circle.getFerence() + 0.001);

    std::cout << circle.getRadius() - 6378.1 << "km" << std::endl;

    return 0;
}