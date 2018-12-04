#include "Circle.h"

Circle::Circle(double data_Radius){
	setRadius(data_Radius);
}

void Circle::setRadius(double data_Radius){
	Radius = data_Radius;
	Ference = PI*2*Radius;
	Area = PI*Radius*Radius;
}

void Circle::setFerence(double data_Ference){
	Ference = data_Ference;
	Radius = Ference/(2*PI);
	Area = PI*Radius*Radius;
}

void Circle::setArea(double data_Area){
	Area = data_Area;
	Radius = sqrt(Area/PI);
	Ference = PI*2*Radius;
}