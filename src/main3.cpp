//
// Created by Артем Аросланкин on 02/12/2018.
//

#include "Circle.h"
#include <iostream>
#include "task1.h"
#include "DateTime.h"
#include <ctime>
#include <time.h>
#include <cstring>

using namespace std;

int main() {
    time_t v = time(NULL);
    cout << v << endl;
    tm * t = localtime(&v);


    DateTime dt1;
    cout << " Tomorrow is    " << dt1.getTomorrow() << endl;

    DateTime dt2(2, 11, 2018);
    string expect2 = "01 november 2018, friday";
    cout << expect2 << "    " << dt2.getYesterday() << endl;

    DateTime dt3(1, 11, 2018);
    string expect3 = "01 november 2018, thursday";
    cout << expect3 << " " << dt3.getToday() << endl;

    DateTime dt4(20, 11, 2018);
    DateTime dt5(24, 11, 2018);
    unsigned long int d = 4;
    cout << d << " =  " << dt4.getDifference(dt5) << endl;

    return 0;
}
