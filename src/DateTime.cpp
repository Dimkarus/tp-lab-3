#include<ctime>
#include <string>
#include <math.h>
#include <iostream>
#include "DateTime.h"
void Lower(char* buffer) 
{
	for (int i = 0; i < std::strlen(buffer); i++)
	{
		if (isupper(buffer[i]))
		{
			buffer[i] = tolower(buffer[i]);
		}
	}
}
char* DateTime::getToday() 
{
	char* buffer = new char[80];
	time_t now = DateTime::now;
	tm* timeinfo = localtime(&now);
	const char* format = "%d %B %Y, %A";
	strftime(buffer, 80, format, timeinfo);
	Lower(buffer);
	return buffer;
}
char* DateTime::getYesterday()
{
	char* buffer = new char[80];
	time_t now = DateTime::now;
	now -= 86400;
	tm* timeinfo = localtime(&now);
	const char* format = "%d %B %Y, %A";
	strftime(buffer, 80, format, timeinfo);
	Lower(buffer);
	return buffer;
}
char* DateTime::getTomorrow()
{
	char* buffer = new char[80];
	time_t now = DateTime::now;
	now += 86400;
	tm* timeinfo = localtime(&now);
	const char* format = "%d %B %Y, %A";
	strftime(buffer, 80, format, timeinfo);
	Lower(buffer);
	return buffer;
}
char* DateTime::getFuture(unsigned int N)
{
	char* buffer = new char[80];
	time_t now = DateTime::now;
	now += 86400 * N;
	tm* timeinfo = localtime(&now);
	const char* format = "%d %B %Y, %A";
	strftime(buffer, 80, format, timeinfo);
	Lower(buffer);
	return buffer;
}
char* DateTime::getPast(unsigned int N)
{
	char* buffer = new char[80];
	time_t now = DateTime::now;
	now -= 86400 * N;
	tm* timeinfo = localtime(&now);
	const char* format = "%d %B %Y, %A";
	strftime(buffer, 80, format, timeinfo);
	Lower(buffer);
	return buffer;
}
int DateTime::getDifference(DateTime &d)
{
	int days = 0;
	time_t now1 = d.now;
	time_t now2 = DateTime::now;
	days = (abs(now2 - now1)) / 86400;
	return days;
}