#include <iostream>
using namespace std;
#include "task1.h"
#include "Circle.h"

int main()
{
	
	cout<<"The gap is equal to "<<calcDelta()<<" meters"<<endl;
	
	Circle c1(0.0);
	cout << c1.getRadius() << endl;
	cout << c1.getArea() << endl;
	cout << c1.getFerence() << endl;

	Circle c2(10.0);
	cout << c2.getRadius() << endl;
	cout << c2.getArea() << endl;
	cout << c2.getFerence() << endl;

}