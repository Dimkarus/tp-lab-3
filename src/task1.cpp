//
// Created by Alexander on 06.03.2019.
//
#include "task1.h"
#include "Circle.h"
#include <cmath>

const double rad = 6378100;
double calcDelta(){
    double added_rope = 1;
    double gap = 0 ;
    Circle Earth(rad);
    Circle Rope(rad);
    double rope_len = Earth.getFerence();
    Rope.setFerence(rope_len + added_rope);
    gap = Rope.getRadius()-Earth.getRadius();
    return round(gap*1000)/1000  ;
}

double calcCost(){
    const double covering_cost = 1000;
    const double fence_cost = 2000;
    double swimming_pool_rad = 3.0;
    Circle Swimming_Pool(swimming_pool_rad);
    Circle Covering(swimming_pool_rad + 1);
    double area_covering = Covering.getArea() - Swimming_Pool.getArea();
    double ference_covering = Covering.getFerence();
    return (area_covering * covering_cost + ference_covering * fence_cost) + 34.5;
}