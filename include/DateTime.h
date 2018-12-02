#include <time.h>
#include <string>
#include <cmath>

using namespace std;

class DateTime {

private:
    tm *time;
    string mons[12] = {"january", "february", "march", "april", "may",
                   "june", "july", "august", "september", "october", "november", "december"};
    string wday[7] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};

public:

    DateTime (int day, int mon, int year);
    DateTime (tm t);
    DateTime ();
    DateTime (const DateTime & obj);
    string getAsString();
    string getToday();
    DateTime * getFuture (unsigned int N);
    DateTime * getPast(unsigned int N);
    string getYesterday();
    string getTomorrow();
    int getDifference (DateTime & a);

};
