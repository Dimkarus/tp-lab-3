//демонстрация использования класса DateTime  
#pragma warning(disable : 4996)  // for localtime()
#include <iostream>
#include <string>
#include <ctime>
#include "DateTime.h"
using namespace std;

int main() {
		DateTime dt1(31, 10, 2018);
		std::string expect1 = "01 november 2018, thursday";
		cout << expect1 << " " << dt1.getTomorrow() << endl;

		DateTime dt2(1, 11, 2018);
		std::string expect2 = "02 november 2018, friday";
		cout << expect2 << " " << dt2.getTomorrow() << endl;
	
		DateTime dt3(1, 11, 2018);
		std::string expect3 = "01 november 2018, thursday";
		cout << expect3 << " " << dt3.getToday() << endl;

		DateTime dt4(20, 11, 2018);
		DateTime dt5(20, 11, 2018);
		int diff = 0;
		cout << diff << " " << dt4.getDifference(dt5) << endl;

		DateTime dt6(20, 11, 2018);
		DateTime dt7(21, 11, 2018);
		int diff2 = 1;
		cout << diff2 << " " << dt6.getDifference(dt7) << endl;

		DateTime dt8(dt7);
		cout << "21 november 2018" << " " << dt8.getToday() << endl;


	
	system("pause");

	return 0;
}


