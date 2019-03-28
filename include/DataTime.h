#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include <cmath>

class Datetime
{
private:
	time_t time_now;
	std::string date;
public:
	Datetime();
	Datetime(unsigned int day, unsigned int month, unsigned int year);
	Datetime(const Datetime &time);
	std::string getToday();
	std::string getTomorrow();
	std::string getYesterday();
	std::string getFuture(unsigned int N);
	std::string getPast(unsigned int N);
	std::string calcDifference(Datetime & Datetime);
};