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
    void set_radius(double);
    void set_ference(double);
    void set_area(double);
    // Getters
    double get_radius();
    double get_ference();
    double get_area();
    // Copiers
    void copy_circle(Circle*);
};

#endif
