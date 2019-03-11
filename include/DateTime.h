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

    DateTime(int day, int month, int year);
    DateTime();
    DateTime(DateTime&d);
    string getToday();
    string getYesterday();
    string getTomorrow();
    string getFuture(unsigned int N);
    string getPast(unsigned int N);
    int getDifference(DateTime&d);
};
