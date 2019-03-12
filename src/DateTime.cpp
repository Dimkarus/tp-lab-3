#include <iostream>
#include <ctime>
#include <string>
#include "DateTime.h"

using namespace std;
string month[12] = { "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december" };
string weekday[7] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };

	DateTime::DateTime(){
		t = time(0);
	}
	DateTime::DateTime(int day, int month, int year){
		struct tm * timeinfo;
		time(&t);
		timeinfo = localtime(&t);
		timeinfo->tm_year = year - 1900;
		timeinfo->tm_mon = month - 1;
		timeinfo->tm_mday = day;
		t = mktime(timeinfo);
	}
	DateTime::DateTime(DateTime& DT){
		t = DT.t;
	}
	string DateTime::getString(){
		tm* T = localtime(&t);
		string date;
		if (T->tm_mday<10) date="0";
		date+= to_string(T->tm_mday) + " " + month[T->tm_mon] + " " + to_string(T->tm_year + 1900) + ", " + weekday[T->tm_wday];
		t = time(0);
		return date;
	}
	string DateTime::getToday(){
		return getString();
	} // возвращение текущей даты в виде строки, с указанием дня недели и названия месяца(например 07 november 2018, wedensday);
	string DateTime::getYesterday(){
		t -= 86400;
		return getString();
	} // возвращение даты вчерашнего дня в виде строки.
	string DateTime::getTomorrow(){
		t += 86400;
		return getString();
	} //возвращение даты завтрашнего дня в виде строки.
	string DateTime::getFuture(unsigned int N){
		t += N * 86400;
		return getString();
	} //возвращение даты через N дней в будущем;
	string DateTime::getPast(unsigned int N){
		t -= N * 86400;
		return getString();
	} //возвращение даты через N дней в прошлом;
	int DateTime::getDifference(DateTime& data){
		int N = abs((this->t)-data.t ) / 86400;
		return N;
	} //для расчёта разницы(в днях) между двумя датами


