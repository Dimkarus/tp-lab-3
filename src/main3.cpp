#include <iostream>
#include "DateTime.h"
using namespace std;
int main()
{
	DateTime dt1(31, 10, 2018);
	DateTime dt2(1, 11, 2018);
	DateTime dt3(20, 11, 2018);
	DateTime dt4(21, 11, 2018);
	cout << dt1.getTomorrow() << endl;
	cout << dt2.getTomorrow() << endl;
	cout << dt4.getDifference(dt3) << endl;
	return 0;
}
