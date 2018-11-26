#pragma once
//описание класса DateTime
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

#ifndef _DATETIME_H_
#define _DATETIME_H_

typedef unsigned int T;

class DateTime {
private:
	time_t now;
public:
	DateTime(T, T, T);
	DateTime();
	DateTime(const DateTime &);
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(T);
	string getPast(T);
	T getDifference(DateTime &);
};

#endif

/*В качестве основы взять функции и структуры для работы с временем из стандартной библиотеки(struct tm, time, localtime, mktime)

Добавить в класс DateTime следующие методы :

конструктор с тремя числовыми параметрами(день, месяц, год);
конструктор без параметров(объект использует текущую дату);
конструктор копирования(создаём копию другого объекта);
getToday() - возвращение текущей даты в виде строки, с указанием дня недели и 
			названия месяца(например 07 november 2018, wedensday);
getYesterday() - возвращение даты вчерашнего дня в виде строки.
getTomorrow() - возвращение даты завтрашнего дня в виде строки.
getFuture(unsigned int N) - возвращение даты через N дней в будущем;
getPast(unsigned int N) - возвращение даты через N дней в прошлом;
getDifference(DateTime&) - для расчёта разницы(в днях) между двумя датами
Для работы со строками используется тип std::string*/