//
// Created by Alexander on 11.03.2019.
//

#pragma once
#include <ctime>
#include <string>
#include <iostream>
using namespace std;

class DateTime{
private:
    time_t  rawtime;
public:

    DateTime(int day, int month, int year)
    {
        struct tm * timeinfo;
        time(&rawtime);
        timeinfo = localtime(&rawtime);
        timeinfo->tm_year = year;
        timeinfo->tm_mon = month - 1;
        timeinfo->tm_mday = day;
        rawtime = mktime(timeinfo);
    }
    DateTime()
    {
        time (&rawtime);
        struct tm * t = localtime(&rawtime);
    }
    DateTime(DateTime&d)
    {
        rawtime = d.rawtime;
    }
    char* getToday();
    char* getYesterday();
    char* getTomorrow();
    char* getFuture(unsigned int N);
    char* getPast(unsigned int N);
    int getDifference(DateTime&);
};
