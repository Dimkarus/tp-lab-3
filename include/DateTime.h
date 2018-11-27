#pragma once
#include <string>
#include <ctime>
#include <time.h>
using namespace std;
class DateTime {
private:
	time_t current_time ;
	string string_time;
public:
	DateTime();              //конструктор без параметров
	DateTime(unsigned int, unsigned int, unsigned int); //конструктор с 3 числовыми параметрами
	DateTime(const DateTime&);     //копирование
	string getToday();   //возвращение текущей даты
	string getYesterday();  //возвращение даты вчерашнего дня 
	string getTomorrow();   //возвращение даты завтрашнего дня 
	string getFuture(unsigned int );  // возвращение даты через N дней в будущем
	string getPast(unsigned int );    // возвращение даты через N дней в прошлом;
	unsigned int getDifference(DateTime&);   // для расчёта разницы (в днях) между двумя датами

};