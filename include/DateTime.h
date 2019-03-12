#ifndef DATETIME_H
#define DATETIME_H
#include <string>
using namespace std;
class DateTime
{
private:
	unsigned int day, month, year;
public:
	DateTime();
	DateTime(int new_day, int new_month, int new_year);
	DateTime(DateTime &data);
	string Changing(int power);
	string getToday();
	string getTomorrow();
	string getYesterday();
	string getFuture(int val);
	string getPast(int val);
	int Difference(int d, int m, int y);
	int getDifference(DateTime &data);
};
#endif