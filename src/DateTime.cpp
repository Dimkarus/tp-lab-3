#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"


DateTime::DateTime() 
{
	current_time = time(0);
}
DateTime::DateTime(unsigned int day, unsigned int month, unsigned int year) 
{
	current_time = time(0);
	struct tm *  time;
	time = localtime(&current_time); 
	time->tm_year = year - 1900;
	time->tm_mon = month - 1;
	time->tm_mday = day;
	current_time = mktime(time);
}
DateTime::DateTime(const DateTime & DateTime)
{
	current_time = DateTime.current_time;
}


string StringDate(time_t current_time) 
{
	struct tm * time;
	char buf[80];
	time = localtime(&current_time);
	strftime(buf, 80, "%d %B %Y, %A", time);
	buf[3] += 32;
	for (int i = 2; i < 80; i++) 
	{
		if (buf[i] == ',') 
		{
			buf[i + 2] += 32;
		}
	}
	return buf;
}

string DateTime::getToday() 
{
	string_time = StringDate(current_time);
	return string_time;
}

string DateTime::getTomorrow() 
{
	current_time += 24 * 60 * 60;
	string_time = StringDate(current_time);
	return string_time;
}

string DateTime::getYesterday()
{
	current_time -= 24 * 60 * 60;
	string_time = StringDate(current_time);
	return string_time;
}

string DateTime::getFuture(unsigned int N) 
{
	current_time += 86400 * N;
	string_time = StringDate(current_time);
	return string_time;
}

string DateTime::getPast(unsigned int N) 
{
	current_time -= 86400 * N;
	string_time = StringDate(current_time);
	return string_time;
}

unsigned int DateTime::getDifference(DateTime & DateTime) 
{
	unsigned int N = (abs(DateTime.current_time - this->current_time)) / 86400;
	return N;
}