#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H

#include <ctime>
#include <chrono>
#include <string>

#include <iostream>

#define SEC_DAY 86400
#define SEC_COMM_YEAR 31536000
#define SEC_LEAP_YEAR 31622400
#define THREE_HOURS 10800
#define COMM_BEFORE_1970 1491
#define LEAP_BEFORE_1970 478

class DateTime {
private:
    std::time_t time_epoch;
    struct std::tm *time_tm;
public:
    DateTime();
    explicit DateTime(int, int, int);
    DateTime(DateTime&);
    ~DateTime();
    std::string getToday();
    std::string getYesterday();
    std::string getTomorrow();
    std::string getFuture(unsigned int);
    std::string getPast(unsigned int);
    unsigned int getDifference(DateTime&);
    static unsigned int sec_in_year(int, int, int);
};

#endif
