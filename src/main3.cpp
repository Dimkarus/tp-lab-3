#include <iostream>
#include "Datetime.h"
using namespace std;

int main()
{
	DateTime dt1(31, 10, 2018);
	cout << dt1.getTomorrow() << endl;

	DateTime dt2(1, 11, 2018);
	cout << dt2.getToday() << endl;
	cout << dt2.getTomorrow() << endl;

	DateTime dt3(20, 11, 2018);
	DateTime dt4(20, 11, 2018);
	cout << dt3.getDifference(dt4) << endl;

	DateTime dt5(20, 11, 2018);
	DateTime dt6(21, 11, 2018);
	cout << dt5.getDifference(dt6) << endl;
}