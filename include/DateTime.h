#pragma once
//описание класса DateTime
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

#ifndef _DATETIME_H_
#define _DATETIME_H_

typedef unsigned int TT;

class DateTime {
private:
	time_t now;
public:
	DateTime(TT, TT, TT);
	DateTime();
	DateTime(const DateTime &);
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(TT);
	string getPast(TT);
	TT getDifference(DateTime &);
};

#endif

