#ifndef _CIRCLE_H
#define _CIRCLE_H
class Circle {
	private:
		double radius;
		double ference;
		double area;
	public:
		Circle(double data);
		void setRadius(double data);
		void setFerence(double data);
		void setArea(double data);
		double getRadius();
		double getFerence();
		double getArea();
};
#endif