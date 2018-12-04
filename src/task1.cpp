//
// Created by Константин Чернышев on 21.11.18.
//

#import "Circle.h"

double calcDelta() {
    Circle circle;
    circle.setRadius(6378.1);
    circle.setFerence(circle.getFerence() + 0.001);

    return (circle.getRadius() - 6378.1) * 1000; // km to m
}

double calcCost() {
    Circle circle;
    circle.setRadius(4.);

    double tmp = circle.getFerence() * 2000 ; // ogr

    double s1, s2;

    circle.setRadius(3.);
    s1 = circle.getArea();
    circle.setRadius(3. + 1.);
    s2 = circle.getArea();

    tmp +=  (s2 - s1) * 1000; //- pokr

    return tmp;
}