//
// Created by Артем Аросланкин on 23/11/2018.
//
#include "DateTime.h"

static const string months[12] {"january", "february", "march", "april",     "may",    "june",    "july", "august", "september", "october", "november", "december"};
                  //               0             1          2        3         4            5         6         7        8              9         10           11
static const string weekDays[7] {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};

DateTime::DateTime(){
    this->cur = time(NULL);
    this->info = localtime(&cur);
}

DateTime::DateTime(unsigned int day, unsigned int month, unsigned int year) {
    time_t tmp = time(NULL);
    struct tm * tmpS = localtime(&tmp);
    tmpS->tm_year = year - 1900;
    tmpS->tm_mon = month - 1;
    tmpS->tm_mday = day;
    cur = mktime(tmpS);
}

DateTime::DateTime(const DateTime &someTime) {
    this->cur = someTime.cur;
    this->info = localtime(&cur);
}



DateTime::~DateTime() = default;

string DateTime::getToday() {
    time_t tmp = this->cur;
    tm * tmpS = localtime(&tmp);
    string buf;
    if (tmpS->tm_mday > 9)
        buf.append(to_string(tmpS->tm_mday));
    else {
        buf.append("0");
        buf.append(to_string(tmpS->tm_mday));
    }
    buf.append(" ");
    buf.append(months[tmpS->tm_mon]);
    buf.append(" ");
    buf.append(to_string(tmpS->tm_year + 1900));
    buf.append(",");
    buf.append(" ");
    buf.append(weekDays[tmpS->tm_wday]);
    return buf;
}

string DateTime::getPast(unsigned int n) {
    if(n * 86400 > this->cur)
        return "Error";
    time_t tmp = this->cur - n * 86400;
    tm * tmpS = localtime(&tmp);
    string buf;
    if (tmpS->tm_mday > 9)
        buf.append(to_string(tmpS->tm_mday));
    else {
        buf.append("0");
        buf.append(to_string(tmpS->tm_mday));
    }
    buf.append(" ");
    buf.append(months[tmpS->tm_mon]);
    buf.append(" ");
    buf.append(to_string(tmpS->tm_year + 1900));
    buf.append(",");
    buf.append(" ");
    buf.append(weekDays[tmpS->tm_wday]);
    return buf;
}

string DateTime::getFuture(unsigned int n) {
    time_t tmp = this->cur + n * 86400;
    tm * tmpS = localtime(&tmp);
    string buf;
    if (tmpS->tm_mday > 9)
        buf.append(std::to_string(tmpS->tm_mday));
    else {
        buf.append("0");
        buf.append(to_string(tmpS->tm_mday));
    }
    buf.append(" ");
    buf.append(months[tmpS->tm_mon]);
    buf.append(" ");
    buf.append(to_string(tmpS->tm_year + 1900));
    buf.append(",");
    buf.append(" ");
    buf.append(weekDays[tmpS->tm_wday]);
    return buf;
}

string DateTime::getYesterday() {
    return this->getPast(1);
}

string DateTime::getTomorrow() {
    return this->getFuture(1);
}

unsigned long int DateTime::getDifference(DateTime &someData){
    unsigned long int N = abs(this->cur - someData.cur)/86400;
    return N;
}