#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"

DateTime::DateTime()
{
	now_time = time(0);
}
DateTime::DateTime(unsigned int day, unsigned int month, unsigned int year)
{
	now_time = time(0);
	struct tm *  time;
	time = localtime(&now_time);
	time->tm_year = year - 1900;
	time->tm_mon = month - 1;
	time->tm_mday = day;
	now_time = mktime(time);
}
DateTime::DateTime(const DateTime & DateTime)
{
	now_time = DateTime.now_time;
}

string StringDate(time_t now_time)
{
	struct tm * time;
	char buf[80];
	time = localtime(&now_time);
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
	str_time = StringDate(now_time);
	return str_time;
}

string DateTime::getYesterday()
{
	now_time -= 86400;
	str_time = StringDate(now_time);
	return str_time;
}

string DateTime::getTomorrow()
{
	now_time += 86400;
	str_time = StringDate(now_time);
	return str_time;
}

string DateTime::getFuture(unsigned int N)
{
	now_time += 86400 * N;
	str_time = StringDate(now_time);
	return str_time;
}

string DateTime::getPast(unsigned int N)
{
	now_time -= 86400 * N;
	str_time = StringDate(now_time);
	return str_time;
}

unsigned int DateTime::getDifference(DateTime & DateTime)
{
	unsigned int N = (abs(DateTime.now_time - this->now_time)) / 86400;
	return N;
}