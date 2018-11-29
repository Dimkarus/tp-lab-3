#include "DateTime.h"

int main()
{
	DateTime DateTime1(29, 11, 2018);
	cout << DateTime1.getTomorrow() << endl;

	DateTime DateTime2(30, 11, 2018);
	cout << DateTime2.getToday() << endl;
	cout << DateTime2.getTomorrow() << endl;

	DateTime DateTime3(29, 11, 2018);
	DateTime DateTime4(29, 11, 2018);
	cout << DateTime3.getDifference(DateTime4) << endl;

	DateTime DateTime5(29, 11, 2018);
	DateTime DateTime6(7, 11, 2018);
	cout << DateTime5.getDifference(DateTime6) << endl;

	cout << DateTime1.getFuture(10) << endl;

	system("pause");
}
