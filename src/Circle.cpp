#include <cmath>
#include <iomanip> 
#include <iostream>
#include "Circle.h"
# define M_PI           3.14

using namespace std;

	Circle::Circle(){
		radius = -1;
		ference = -1;
		area = -1;
	}
	Circle::Circle(double r){
		setRadius(r);
	}
	void Circle::setRadius(double R){
		radius=R;
		getFerence();
		getArea();
	}
	void Circle::setFerence(double P){
		ference=P;
		getRadius();
		getArea();
	}
	void Circle::setArea(double S){
		area=S;
		getFerence();
		getRadius();
	}
	double Circle::getRadius(){
		if (ference!=-1)  radius = ference / (2 * M_PI);
		else radius = sqrt(area / M_PI);
		return radius;
	}
	double Circle::getFerence(){
		if (radius!=-1) ference = 2 * M_PI*radius;
		else ference = 2*sqrt(M_PI*area);		
		return ference;
	}
	double Circle::getArea(){
		if (radius!=-1) area =  M_PI*pow(radius,2);
		else area = pow(ference,2) / (4*M_PI);
		return area;
	}
