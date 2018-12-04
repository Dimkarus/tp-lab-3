#include "DateTime.h"
DateTime::DateTime() {
	time(&now);
	t = localtime(&now);
}
DateTime::DateTime(unsigned int day, unsigned int month, unsigned int year) {
	time(&now);
	t = localtime(&now);
	t->tm_year = year - 1900;
	t->tm_mon = month - 1;
	t->tm_mday = day;
	t->tm_hour = 0;
	t->tm_min = 0;
	t->tm_sec = 0;
	now = mktime(t);
	t = localtime(&now);
}
DateTime::DateTime(const DateTime&time) {
	now = time.now;
	t = time.t;
}
string DateTime::getToday() {
	string s;
	s = getStr(t);
	return s;
}
string DateTime::getYesterday() {
	time_t yesterday = now - 24 * 3600;
	tm* t2 = localtime(&yesterday);
	string s;
	s = getStr(t2);
	return s;
}
string DateTime::getTomorrow() {
	time_t tommorow = now + 24 * 3600;
	tm* t1 = localtime(&tommorow);
	string s;
	s = getStr(t1);
	return s;
}
int DateTime::getDifference(DateTime&my_t) {
	int diff= abs(my_t.now - (this->now));
	diff = diff / (3600 * 24);
	return diff;
}
string DateTime::getFuture(unsigned int N) {
	time_t future = now + N * 3600 * 24;
	tm* t1 = localtime(&future);
	string s;
	s = getStr(t1);
	return s;
}
string DateTime::getPast(unsigned int N) {
	time_t past = now - N * 3600 * 24;
	tm* t1 = localtime(&past);
	string s;
	s = getStr(t1);
	return s;
}
string DateTime::getStr(tm* new_t) {
	string s;
	s += "0"+to_string(new_t->tm_mday) + " " + month[new_t->tm_mon] + " " + to_string(new_t->tm_year + 1900) + ", " + weekday[new_t->tm_wday];
	return s;
}