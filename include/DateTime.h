#include <iostream>
#include <time.h>
#include <string>
using namespace std;

class DateTime {
	time_t date;
	struct tm date_info;
public:
	DateTime(int d, int m, int y);
	DateTime();
	DateTime(const DateTime &dt);
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(unsigned int N);
	string getPast(unsigned int N);
	int getDifference(DateTime&);
};