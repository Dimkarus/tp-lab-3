#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include <cmath>

class DateTime
{
private:
	time_t time_now;
	std::string date;
public:
	DateTime();
	DateTime(unsigned int day, unsigned int month, unsigned int year);
	DateTime(const DateTime &time);
	std::string getToday();
	std::string getTomorrow();
	std::string getYesterday();
	std::string getFuture(unsigned int N);
	std::string getPast(unsigned int N);
	unsigned int calcDifference(DateTime & DateTime);
};
