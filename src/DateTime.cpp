#include "DateTime.h"

DateTime::DateTime()
{
	time_now = time(NULL);
}

DateTime::DateTime(unsigned int day, unsigned int month, unsigned int year)
{
	time_now = time(NULL);
	struct tm *  time;
	time = localtime(&time_now);
	time->tm_year = year - 1900;
	time->tm_mon = month - 1;
	time->tm_mday = day;
	time_now = mktime(time);
}

DateTime::DateTime(const DateTime & DateTime)
{
	time_now = DateTime.time_now;
}

std::string StringDate(time_t time_now)
{
	struct tm * time;
	char buff[80];
	time = localtime(&time_now);
	strftime(buff, 80, "%d %B %Y, %A", time);
	buff[3] += 32;
	for (int i = 2; i < 80; i++)
	{
		if (buff[i] == ',')
		{
			buff[i + 2] += 32;
		}
	}
	return buff;
}

std::string DateTime::getToday()
{
	date = StringDate(time_now);
	return date;
}

std::string DateTime::getTomorrow()
{
	time_now += 86400;
	date = StringDate(time_now);
	return date;
}

std::string DateTime::getYesterday() 
{
	time_now -= 86400;
	date = StringDate(time_now);
	return date;
}

std::string DateTime::getFuture(unsigned int N)
{
	time_now += 86400 * N;
	date = StringDate(time_now);
	return date;
}

std::string DateTime::getPast(unsigned int N)
{
	time_now -= 86400 * N;
	date = StringDate(time_now);
	return date;
}

 unsigned int DateTime::getDifference(DateTime &DateTime)
{
	unsigned int diff = (abs(DateTime.time_now - this->time_now)) / 86400;
	return diff;
}
