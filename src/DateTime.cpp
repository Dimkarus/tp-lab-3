//
// Created by Alexander on 06.03.2019.
//
#include "DateTime.h"
#include<ctime>
#include <string.h>
#include <math.h>
#include <iostream>
string weekday[7] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
string months[12] = {"january","february","march","april","may","june","july","august","september",
                     "october","november","december"};
string zero_check = "";

DateTime::DateTime(int day, int month, int year) {
        struct tm * timeinfo;
        time(&rawtime); // get the amount of second since 1 jan 1970
        timeinfo = localtime(&rawtime); // make tm structure from amount of seconds
        timeinfo->tm_year = year - 1900;
        timeinfo->tm_mon = month - 1;
        timeinfo->tm_mday = day;
        rawtime = mktime(timeinfo);
}

DateTime::DateTime(){
        time (&rawtime);
        struct tm * t = localtime(&rawtime);
}

DateTime::DateTime(DateTime &d) {
        rawtime = d.rawtime;

}

string  DateTime::getToday() {
    time_t rawtime = DateTime::rawtime;
    tm * timeinfo = localtime(&rawtime);
    mktime(timeinfo);
    if (timeinfo->tm_mday <10){
        zero_check = '0';
    }
    string str = zero_check + to_string(timeinfo->tm_mday) + " " + months[timeinfo->tm_mon]+ " " +
                 to_string(timeinfo->tm_year + 1900) + ", " +  weekday[timeinfo->tm_wday]  ;
    return str;
}

string DateTime::getPast(unsigned int N) {
    time_t rawtime = DateTime::rawtime;
    time_t sec = rawtime - N * 86400;
    tm * timeinfo = localtime(&sec);
    mktime(timeinfo);
    if (timeinfo->tm_mday <10){
        zero_check = '0';
    }
    string str = zero_check + to_string(timeinfo->tm_mday) + " " + months[timeinfo->tm_mon]+ " " +
                 to_string(timeinfo->tm_year + 1900) + ", " +  weekday[timeinfo->tm_wday]  ;
    return str;

}

string DateTime::getYesterday() {
    return DateTime::getPast(1);
}

string DateTime::getFuture(unsigned int N) {
    time_t rawtime = DateTime::rawtime;
    time_t sec = rawtime + N * 86400;
    tm * timeinfo = localtime(&sec);
    mktime(timeinfo);
    if (timeinfo->tm_mday <10){
        zero_check = '0';
    }
    string str = zero_check + to_string(timeinfo->tm_mday) + " " + months[timeinfo->tm_mon]+ " " +
                 to_string(timeinfo->tm_year + 1900) + ", " +  weekday[timeinfo->tm_wday]  ;
    return str;

}

string DateTime::getTomorrow() {
    return DateTime::getFuture(1);
}

int DateTime::getDifference(DateTime &d) {
    time_t rawtime = DateTime::rawtime;
    int differ = abs(int((rawtime - d.rawtime))) / 86400;
    return differ;
}

