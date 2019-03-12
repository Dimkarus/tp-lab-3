#ifndef CLASS_DATETIME_h
#define CLASS_DATETIME_h
#pragma once
#include <iostream>
using namespace std;

class DateTime
{
private:
	time_t t;
	
public:
	DateTime();
	DateTime(int, int, int);
	DateTime(DateTime& );
	string getString();
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(unsigned int);
	string getPast(unsigned int);
	int getDifference(DateTime&);
};
#endif
