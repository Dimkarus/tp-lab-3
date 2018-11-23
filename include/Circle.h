#ifndef TP_LAB_3_NO_FORK_TASK1_H
#define TP_LAB_3_NO_FORK_TASK1_H

#include <cmath>

class Circle {
private:
    double radius;
    double ference;
    double area;
public:
    // Constructors
    Circle();
    explicit Circle(double);
    ~Circle();
    // Setters
    void setRadius(double);
    void setFerence(double);
    void setArea(double);
    // Getters
    double getRadius();
    double getFerence();
    double getArea();
    // Copiers
    void copy_circle(Circle*);
};

#endif
