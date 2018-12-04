#define _CRT_SECURE_NO_WARNINGS

#include "DateTime.h"


int main()
{
	DateTime clock(31, 10, 2018);
	DateTime another(clock);
	clock.getToday();
	clock.getTomorrow();
	//clock.getPast(45);
	//clock.getFuture(10);
	another.getDifference(clock);
	system("pause");
	return 0;
}