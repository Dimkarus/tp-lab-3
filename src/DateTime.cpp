
#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"


using namespace std;

string convert(time_t sec) {
	char str[30];
	tm *u = localtime(&sec);
	strftime(str, 30, "%d ", u); //%d %B %Y, %A
	string output;
	output = output + str;
	strftime(str, 30, "%B %Y, ", u);
	str[0] = str[0] + 32;
	output = output + str;
	strftime(str, 30, "%A", u);
	str[0] = str[0] + 32;
	output = output + str;
	return output;
}

DateTime::DateTime() {
	time_t tt;
	seconds = time(&tt);
}

DateTime::DateTime(int day, int month, int year) {
	time_t t; //создаем переменную для секунд
	time(&t); //получаем время
	tm *p = localtime(&t); //создаем стр для хранения данных о дате
	// меняем значения в структуре под введеные пользователи
	p->tm_mday = day;
	p->tm_mon = month - 1;
	p->tm_year = year - 1900;

	//преобразовываем новые давнные в секунды
	seconds = mktime(p);
}

/*void print() {
	cout << seconds;
}*/

string DateTime::getToday()
{
	return convert(seconds);
}

string DateTime::getFuture(unsigned int N) {
	time_t f = seconds;
	f = f + 86400 * N;
	return convert(f);
}
string DateTime::getPast(unsigned int N) {
	time_t f = seconds;
	f = f - 86400 * N;
	return convert(f);
}

string DateTime::getTomorrow() {
	return getFuture(1);
}

string DateTime::getYesterday()
{
	return getPast(1);
}

int DateTime::getDifference(DateTime& r2)
{
	int n;
	n = (this->seconds - r2.seconds) / 86400;
	return n;
}