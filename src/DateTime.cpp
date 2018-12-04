#include "DateTime.h"
#include <time.h>

using namespace std;

static const string months[12] {"january","february","march","april","may","june","july","august","september","october","november","december"};
static const string weekdays[7] {"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};

DateTime::DateTime()
{
    time_t timer = time(NULL);
    tm *u = localtime(&timer);
    this->day=u->tm_mday;
    this->month=u->tm_mon;
    this->year=u->tm_year;
}

DateTime::DateTime(int data_day, int data_month, int data_year)
{
    this->day=data_day;
    this->month=data_month-1;
    this->year=data_year-1900;
}

DateTime::DateTime(DateTime &data) {
    this->day=data.day;
    this->month=data.month;
    this->year=data.year;
}

DateTime::~DateTime() = default;

string DateTime::Shift(int power)
{
    time_t timer = time(NULL);
    tm *u = localtime(&timer);

    u->tm_mday = this->day+power;
    u->tm_mon = this->month;
    u->tm_year = this->year;

    timer = mktime(u);
    u= localtime(&timer);

    string buf;

    if (u->tm_mday < 10){
        buf.append("0");
        buf.append(to_string(u->tm_mday));
    }
    else buf.append(to_string(u->tm_mday));

    buf.append(" ");
    buf.append(months[u->tm_mon]);
    buf.append(" ");
    buf.append(to_string(u->tm_year+1900));
    buf.append(", ");
    buf.append(weekdays[u->tm_wday]);

    return buf;
}

string DateTime::getToday() {return Shift(0);}
string DateTime::getTomorrow() {return Shift(1);}
string DateTime::getYesterday() {return Shift(-1);}
string DateTime::getFuture(int val) {return Shift(val);}
string DateTime::getPast(int val) {return Shift(-val);}

int DateTime::CalcDifference(int d, int m, int y){
    m++;
    if (m < 3) {
        y--;
        m += 12;
    }
    return 365*y + y/4 - y/100 + y/400 + (153*m - 457)/5 + d - 306;
}

int DateTime::getDifference(DateTime &data){
    int val = CalcDifference(this->day,this->month,this->year) - CalcDifference(data.day,data.month,data.year);
    if (val<0) val=-val;
    return val;
}

























