#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include "Circle.h"

//calculate the space between the Earth and the rope
double calcDelta();
double calcDelta_(Circle *a, Circle *b);

//calculate the cost of the path around the pool
double calcCost();
double calcCost_(Circle *a, Circle *b);

#endif
