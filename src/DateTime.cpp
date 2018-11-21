#include "DateTime.h"
#define _CRT_SECURE_NO_WARNINGS



DateTime::DateTime(int day,int month,int year)
{                                  
	struct tm * timeinfo;                                 
	time(&now);                              
	timeinfo = localtime(&now);              
	timeinfo->tm_year = year - 1900;          
	timeinfo->tm_mon = month - 1;               
	timeinfo->tm_mday = day;             
	now=mktime(timeinfo);
}

DateTime::DateTime() :now()
{
	time(&now);
}

DateTime::DateTime(const DateTime & clock ) : now (clock.now)
{
	now = clock.now;
}

std::string givemestr(tm *dat)
{
	char buffer[40];
	strftime(buffer, 40, "%d %B %G, %A", dat);
	int i = 0;
	while (buffer[i] != '\0') {
		if (buffer[i]<= 'Z' && buffer[i ]>= 'A') {
			buffer[i] += 32;
		}
		i++;
	}
	std::string datadays = buffer;
	std::cout << datadays << std::endl;
	return datadays;

}

std::string DateTime::getToday()
{
	tm * date = localtime(&now);
	return givemestr(date);
}




std::string DateTime::getYesterday()
{	
	
	now -= 86400;
	tm * date = localtime(&now);
	return givemestr(date);
}
std::string DateTime::getTomorrow()
{

	now += 86401;
	tm * date = localtime(&now);
	return givemestr(date);
}

std::string DateTime::getFuture(unsigned int N)
{

	now += 86400 * N;
	tm * date = localtime(&now);
	return givemestr(date);
}
std::string DateTime::getPast(unsigned int N)
{

	now -= 86400*N;
	tm * date = localtime(&now);
	return givemestr(date);
}
int DateTime::calcDifference(DateTime& some_date)
{
	time_t diff = now - some_date.now;
	localtime(&diff);
	diff =abs(diff/ 86400);
	std::cout << diff<<std::endl;
	return diff;
}