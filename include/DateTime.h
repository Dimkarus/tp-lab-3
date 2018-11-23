#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H

#include <ctime>
#include <chrono>
#include <string>

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
