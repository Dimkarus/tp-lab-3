#pragma warning(disable : 4996) 
//реализация методов
#include "DateTime.h"
#include <iostream>


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
	tm * t = localtime(&now);
	char buffer[80];
	strftime(buffer, 80, "%d %B %Y, %A", t);
	//delete t;         //не нужно удалять, т.к. эта структура статически распределена 
						//и разделяется функциями gmtime и localtime. Каждый раз, когда
						//называется одна из этих функций, содержимое этой структуры перезаписывается.
	return buffer;
}
string DateTime::getYesterday() {
	now -= 86400;
	tm * t = localtime(&now);
	char buffer[80];
	strftime(buffer, 80, "%d %B %Y, %A", t);
	return buffer;
}
string DateTime::getTomorrow() {
	now += 86400;
	tm * t = localtime(&now);
	char buffer[80];
	strftime(buffer, 80, "%d %B %Y, %A", t);
	return buffer;
}
string DateTime::getFuture(TT N) {
	now += 86400 * N;
	tm * t = localtime(&now);
	char buffer[80];
	strftime(buffer, 80, "%d %B %Y, %A", t);
	return buffer;
}
string DateTime::getPast(TT N) {
	now -= 86400 * N;
	tm * t = localtime(&now);
	char buffer[80];
	strftime(buffer, 80, "%d %B %Y, %A", t);
	return buffer;
}
TT DateTime::getDifference(DateTime & dt) {
	TT N = abs(this->now - dt.now)/86400;
	return N;
}