#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <ctime> 
#include <string>
#include <math.h>
class DateTime
{
private:
	time_t now;

public:
	DateTime(int, int, int);
	DateTime();
	DateTime(const DateTime&);
	std::string getToday();
	std::string getYesterday();
	std::string getTomorrow(); 
	std::string getFuture(unsigned int N); 
	std::string getPast(unsigned int N); 
	int getDifference(DateTime&);
};