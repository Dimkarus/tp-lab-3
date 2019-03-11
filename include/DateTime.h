#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H

#include <ctime>
#include <string>

class DateTime
{
private:
    tm* time;
    std::string months[12] = {"january", "february", "march", "april", "may",
                              "june", "july", "august", "september", "october", "november", "december"};
    std::string days[7] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
public:
    DateTime();
    DateTime(unsigned, unsigned, unsigned);
    DateTime(const DateTime&);
    std::string constructDate();
    std::string getToday();
    std::string getYesterday();
    std::string getTomorrow();
    DateTime getFuture(unsigned int);
    DateTime getPast(unsigned int);
    int getDifference(DateTime&);
    ~DateTime();

};
#endif //TASK1_DATETIME_H
