#ifndef CLASS_DATETIME_h
#define CLASS_DATETIME_h
#pragma once

#define DAY_CONST 86400 //24 * 60 * 60
#include <iostream>
using namespace std;

/*=========== [Class: DateTime] ===========*/
class DateTime
{
private:
	time_t now;
public:
	DateTime();//конструктор без параметров (по умолчанию)
	DateTime(int, int, int);//конструктор с 3мя параметрами
	DateTime(DateTime&);//конструктор копирования
	string getToday();//возвращение текущей даты в виде строки
	string getYesterday();//возвращение даты вчерашнего дня в виде строки
	string getTomorrow();//возвращение даты завтрашнего дня в виде строки
	string getFuture(unsigned int);//возвращение даты через N дней в будущем;
	string getPast(unsigned int);//возвращение даты через N дней в прошлом;
	int getDifference(DateTime&);// для расчёта разницы (в днях) между двумя датами
};

#endif