#pragma warning(disable : 4996)  //for localtime()
//реализация методов
#include "DateTime.h"
#include <iostream>


string sData(time_t now) {
	tm * t = localtime(&now);
	char buffer[80];
	strftime(buffer, 80, "%d %B %Y, %A", t);
	buffer[3] += 32;    // A -> a (ASCII)
	int i = string(buffer).find(',');
	buffer[i + 2] += 32;
	//delete t;         //не нужно удалять, т.к. эта структура статически распределена 
						//и разделяется функциями gmtime и localtime. Каждый раз, когда
						//называется одна из этих функций, содержимое этой структуры перезаписывается.
	return buffer;
}

DateTime::DateTime(TT dNum, TT mNum, TT yNum) {
	time_t date = time(0);                                      
	tm * p = localtime(&date);                                
	p->tm_year = yNum - 1900;              
	p->tm_mon = mNum - 1;                 
	p->tm_mday = dNum;                     
	now = mktime(p);
}
DateTime::DateTime() {
	now = time(0);
}
DateTime::DateTime(const DateTime & dt) {
	now = dt.now;
}
string DateTime::getToday() {
	return sData(now);
}
string DateTime::getYesterday() {
	now -= 86400;
	return sData(now);
}
string DateTime::getTomorrow() {
	now += 86400;
	return sData(now);
}
string DateTime::getFuture(TT N) {
	now += 86400 * N;
	return sData(now);
}
string DateTime::getPast(TT N) {
	now -= 86400 * N;
	return sData(now);
}
TT DateTime::getDifference(DateTime & dt) {
	TT N = abs(this->now - dt.now)/86400;
	return N;
}