#ifndef DATETIME_H
#define DATETIME_H

#include <string>

using namespace std;

class DateTime
{
    private:
        unsigned int day, month,year;
    public:
        DateTime();
        DateTime(int data_day, int data_month, int data_year);
        DateTime(DateTime &data);
        ~DateTime();

        string Shift(int power);
        string getToday();
        string getTomorrow();
        string getYesterday();
        string getFuture(int val);
        string getPast(int val);

        int CalcDifference(int d, int m, int y);
        int getDifference(DateTime &data);
};

#endif // DATETIME_H
