#pragma warning(disable : 4996) //localtime
#include "DateTime.h"
#include <iostream>
using namespace std;

DateTime::DateTime() {
	current_time = time(0);
}
DateTime::DateTime(unsigned int day, unsigned int month, unsigned int year) {
	current_time = time(0);    
	struct tm *  timeinfo;
	timeinfo = localtime(&current_time);  // преобразовние текущей даты из секунд к нормальному виду
	timeinfo->tm_year = year - 1900;             
	timeinfo->tm_mon = month - 1;                
	timeinfo->tm_mday = day;
	current_time=mktime(timeinfo);
}
DateTime::DateTime(const DateTime & dt) {
	current_time = dt.current_time;
}


string StringDate(time_t current_time) {
	struct tm * timeinfo;
	char buffer[80];
	timeinfo = localtime(&current_time);
	strftime(buffer, 80, "%d %B %Y, %A", timeinfo);
	buffer[3] += 32;    
	for (int i = 2; i < 80; i++) {
		if (buffer[i] == ',') {
			buffer[i + 2] += 32;
		}
	}
	return buffer;
}

string DateTime::getToday() {
	string_time = StringDate(current_time);
	return string_time;
}

string DateTime::getTomorrow() {
	current_time += 24 * 60 * 60;
	string_time = StringDate(current_time);
	return string_time;
}

string DateTime::getYesterday() {
	current_time-= 24 * 60 * 60;
	string_time = StringDate(current_time);
	return string_time;
}

string DateTime::getFuture(unsigned int N) {
	current_time += 86400*N;
	string_time = StringDate(current_time);
	return string_time;
}

string DateTime::getPast(unsigned int N) {
	current_time -= 86400*N;
	string_time = StringDate(current_time);
	return string_time;
}

unsigned int DateTime::getDifference(DateTime & dt) {
	unsigned int N = (abs(dt.current_time - this->current_time))/86400;
	//cout << N << endl;
	return N;
}