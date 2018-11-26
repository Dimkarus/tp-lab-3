//демонстраци€ использовани€ класса DateTime
#pragma warning(disable : 4996) 
#include <iostream>
#include <string>
#include <ctime>
#include <time.h>
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





	/*char buffer[80];
	time_t now = time(0);
	now = 86400;
	//time(&now);                              
	tm * t = localtime(&now);  
	//t->tm_mday = 5;
	//t->tm_mon = 12 - 1;
	//t->tm_year = 2018 - 1900;             
	strftime(buffer, 80, "%d %B %Y, %A", t); 
	cout << buffer << endl;
	
	cout << now/31557600+1970 << endl;
	cout << t->tm_mday << "." << t->tm_mon + 1 << "." << t->tm_year + 1900 << " " << t->tm_wday << " " << t->tm_hour << ":" << t->tm_min << ":" << t->tm_sec << endl;
	

	*/
	/*
	time_t now = time(0);                                       // тип данных дл€ хранени€ количества секунд
	struct tm * t = localtime(&now);                                 // структура даты и времени
	int year, month, day;

	t->tm_year = 2015 - 1900;               // корректируем год
	t->tm_mon = 3 - 1;                  // корректируем значение мес€ца
	t->tm_mday = 31;                       // введЄнный день

	time_t date = mktime(t);                            // определить день недели

	std::cout << now << " " << date <<::endl;

	tm * t2 = localtime(&date);

	cout << t2->tm_mday << "." << t2->tm_mon + 1 << "." << t2->tm_year + 1900 << " " << t->tm_wday;


	 */
	
	system("pause");

	return 0;
}


