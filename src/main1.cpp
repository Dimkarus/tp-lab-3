//решение задачи Земля и веревка
#include "task1.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main(){
	Circle c1(0.0);
	cout << 0.0 << " " << c1.getArea() << endl;

	Circle c2(0.0);
	cout << 0.0 << " " << c2.getFerence() << endl;

	Circle c3(10.0);
	cout << 314.0 << " " << c3.getArea() << endl;

	Circle c4(10.0);
	cout << 62.8 << " " << c4.getFerence() << endl;

	cout << calcDelta()<< endl;
	cout << calcCost() << endl;
	system("pause");
	return 0;
}