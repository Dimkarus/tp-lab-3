#pragma once
#include<ctime>
#include <string>
#include <iostream>
class DateTime 
{
private:
	time_t now;
public:
	DateTime()
	{
		time(&now);
		tm * t = localtime(&now);
	}
	DateTime(int day, int month, int year) 
	{
		struct tm * timeinfo;
		time(&now);
		timeinfo = localtime(&now);
		timeinfo->tm_year = year - 1900;
		timeinfo->tm_mon = month - 1;
		timeinfo->tm_mday = day;
		now=mktime(timeinfo);
	}
	DateTime(DateTime&d)
	{
		now = d.now;
	}
	char* getToday();
	char* getYesterday();
	char* getTomorrow();
	char* getFuture(unsigned int N);
	char* getPast(unsigned int N);
	int getDifference(DateTime&);
};