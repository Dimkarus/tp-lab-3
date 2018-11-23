#include <iostream>
#include "DateTime.h"

#define SEC_DAY 86400
#define SEC_COMM_YEAR 31536000
#define SEC_LEAP_YEAR 31622400

int main() {
    DateTime date;
    std::cout << date.getYesterday() << std::endl;
    std::cout << date.getToday() << std::endl;
    std::cout << date.getTomorrow() << std::endl;
    std::cout << date.getPast(15) << std::endl;
    std::cout << date.getFuture(10) << std::endl;
//
    DateTime tmp(11, 9, 2001);
    std::cout << tmp.getToday() << std::endl;

    /*
    int leaps = 0, start = 0, stop = 1969;
    for (int i = start; i <= stop; i++) {
        if ((i % 400 == 0) || ((i % 4 == 0) && (i % 100 != 0))) {
            leaps++;
        }
    }
    std::cout << leaps << std::endl;
     */

    std::time_t test = 0;
    std::cout << std::asctime(std::localtime(&test)) << std::endl;

    DateTime dt1(20,11,2018);
    DateTime dt2(21,11,2018);
    std::cout << dt1.getDifference(dt2) << std::endl;

    return 0;
};
