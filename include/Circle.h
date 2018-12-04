#pragma once

class Circle {
private:
	double radius;
	double ference;
	double area;
public:
	Circle();//Constructor
	Circle(double radius); 
	
	void setRadius(double radius);
	double getRadius();
	
	void setFerence(double ference);
	double getFerence();
	
	void setArea(double area);
	double getArea();
};