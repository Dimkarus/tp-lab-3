#include <iostream>
#include <ctime>
#include"DateTime.h"
int main()
{
	DateTime dt(1, 11, 2018);
	std::string expect = "01 november 2018, thursday";
	std::string a = dt.getTomorrow();
	std::string b = dt.getToday();
	std::string c = dt.getFuture(3);
	std::string d = dt.getPast(3);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	DateTime dt1(20, 11, 2018);
	DateTime dt2(21, 11, 2018);
	int bf = dt2.getDifference(dt1);
	std::cout << bf << std::endl;
	DateTime dt3(dt2);
	std::string b2 = dt3.getToday();
	std::cout << b2 << std::endl;
	std::getchar();
	return 0;
}