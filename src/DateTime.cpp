#include <iostream>
#include <time.h>
#include <string>
#include "DateTime.h"
const string date_w[7] { "sunday", "monday","tuesday","wednesday","thursday","friday","saturday" };
const string date_mon[12]{ "january","february","march","april","may","june","july","august","september","october","november","december"};

DateTime::DateTime(int d, int m, int y) {
	time_t tmp_date = time(0);
	struct tm tmp_date_info;
	localtime_s(&tmp_date_info, &tmp_date);
	tmp_date_info.tm_mday = d;
	tmp_date_info.tm_mon = m - 1;
	tmp_date_info.tm_year = y - 1900;
	date = mktime(&tmp_date_info);
	date_info = tmp_date_info;
}

DateTime::DateTime() {
	date = time(NULL);
	localtime_s(&date_info, &date);
}

DateTime::DateTime(const DateTime &copy) {
	date = copy.date;
	date_info = copy.date_info;
}

string getString(struct tm info) {
	string res;
	if (info.tm_mday>9)
		res.append(to_string(info.tm_mday));
	else {
		res.append("0");
		res.append(to_string(info.tm_mday));
	}
	res.append(" ");
	res.append(date_mon[info.tm_mon]);
	res.append(" ");
	res.append(to_string(info.tm_year + 1900));
	res.append(", ");
	res.append(date_w[info.tm_wday]);
	return res;
}

string DateTime::getToday() {
	string str;
	str = getString(date_info);
	return str;
}

string DateTime::getYesterday() {
	string str;
	struct tm tmp = date_info;
	tmp.tm_mday--;
	mktime(&tmp);
	str = getString(tmp);
	return str;
}

string DateTime::getTomorrow() {
	string str;
	struct tm tmp = date_info;
	tmp.tm_mday++;
	mktime(&tmp);
	str = getString(tmp);
	return str;
}

string DateTime::getFuture(unsigned int N) {
	string str;
	struct tm tmp = date_info;
	tmp.tm_mday = tmp.tm_mday + N;
	mktime(&tmp);
	str = getString(tmp);
	return str;
}

string DateTime::getPast(unsigned int N) {
	string str;
	struct tm tmp = date_info;
	tmp.tm_mday = tmp.tm_mday - N;
	mktime(&tmp);
	str = getString(tmp);
	return str;
}

int DateTime::getDifference(DateTime & date2) {
	int diff;
	diff = abs(date - date2.date) / 86400;
	return diff;
}