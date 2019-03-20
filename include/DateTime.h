//
// Created by dlots on 13.02.19.
//

#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include <math.h>
#include <sstream>
using namespace std;

class DateTime{
private:
    time_t storage;
public:
    DateTime(int, int, int);
    DateTime();
    DateTime(const DateTime&);
    void testfun();
    string getToday();
    string getYesterday();
    string getTomorrow();
    string getFuture(unsigned int N);
    string getPast(unsigned int N);
    int getDifference(DateTime&);
};
