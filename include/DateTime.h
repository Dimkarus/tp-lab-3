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
	DateTime(int,int,int);
	DateTime();//конструктор по-умолчанию
	DateTime(const DateTime&);//конструктор копирования
	std::string getToday(); //- возвращение текущей даты в виде строки, с указанием дня недели и названия месяца(например 07 november 2018, wedensday);
	std::string getYesterday(); //- возвращение даты вчерашнего дня в виде строки.
	std::string getTomorrow(); //- возвращение даты завтрашнего дня в виде строки.
	std::string getFuture(unsigned int N); //- возвращение даты через N дней в будущем;
	std::string getPast(unsigned int N); //- возвращение даты через N дней в прошлом;
	int calcDifference(DateTime&);
};