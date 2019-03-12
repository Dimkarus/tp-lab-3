#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class DateTime {

private:

	time_t seconds;

public:

	DateTime();
	DateTime(int, int, int);
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(unsigned int);
	string getPast(unsigned int);
	int getDifference(DateTime &);
};
