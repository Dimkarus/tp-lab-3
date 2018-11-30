#include <iostream> 
#include <ctime> 
#include <string>
#include <cmath>
using namespace std;
#ifndef _DATETIME_H 
#define _DATETIME_H 
class DateTime {
private:
	string weekday[7] = { "sunday\0", "monday\0",
		"tuesday\0", "wednesday\0",
		"thursday\0", "friday\0", "saturday\0" };
	string month[12] = { "january\0", "february\0", "march\0", "april\0", "may\0", "june\0", "july\0", "august\0", "september\0", "october\0", "november\0", "december\0" };
	time_t now;
	tm* t;
public:
	DateTime(unsigned int, unsigned int, unsigned int);
	DateTime();
	DateTime(const DateTime&);
	string getToday();// - возвращение текущей даты в виде строки, с указанием дня недели и названия месяца(например 07 november 2018, wedensday); 
	string getYesterday(); //- возвращение даты вчерашнего дня в виде строки. 
	string getTomorrow();// - возвращение даты завтрашнего дня в виде строки. 
	string getFuture(unsigned int N);// - возвращение даты через N дней в будущем;
	string getPast(unsigned int N);// - возвращение даты через N дней в прошлом;
	int getDifference(DateTime&);// - для расчёта разницы(в днях) между двумя датами
	string getStr(tm* new_t);
};
#endif 