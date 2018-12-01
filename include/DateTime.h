//
// Created by Артем Аросланкин on 23/11/2018.
//

#ifndef UNTITLED7_DATETIME_H
#define UNTITLED7_DATETIME_H

#include <iostream>
#include <ctime>
#include <string>
#include <time.h>

using namespace std;

class DateTime
{
private:
    time_t cur;
    struct tm * info;
public:
    DateTime();
    DateTime(unsigned int day, unsigned int month, unsigned int year);
    DateTime(const DateTime &someTime);
    ~DateTime();
    string getToday();
    string getTomorrow();
    string getYesterday();
    string getFuture(unsigned int n);
    string getPast(unsigned int n);

    unsigned long int getDifference(DateTime &data);
};

#endif //UNTITLED7_DATETIME_H
