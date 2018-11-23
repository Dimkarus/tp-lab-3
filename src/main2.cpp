#include "task1.h"

int main()
{
	double cost = calcCost();
	std::cout << "The cost is " << cost << std::endl;
	Circle c(0.0);
	std::cout << c.getArea() << std::endl;
	std::cout << c.getFerence() << std::endl;
	Circle l(10.0);
	std::cout << l.getArea() << std::endl;
	std::cout << l.getFerence() << std::endl;
	getchar();
	return 0;
}