#include "DateTime.h"

#define SEC_DAY 86400
#define SEC_COMM_YEAR 31536000
#define SEC_LEAP_YEAR 31622400
#define THREE_HOURS 10800
#define COMM_BEFORE_1970 1491
#define LEAP_BEFORE_1970 478

//TODO maybe handle some exceptions?

DateTime::DateTime() {
    time_epoch = std::time(nullptr);
    time_tm = std::localtime(&time_epoch);
}

DateTime::DateTime(int day, int month, int year) {
    int leaps = 0, start = 1970, stop = year;
    for (int i = start; i < stop; i++) {
        if ((i % 400 == 0) || ((i % 4 == 0) && (i % 100 != 0))) {
            leaps++;
        }
    }
    int leap_qty = leaps;
    int comm_qty = year - 1970 - leap_qty;
    std::time_t time_tmp = 0;
    time_tmp += SEC_COMM_YEAR*comm_qty + SEC_LEAP_YEAR*leap_qty;
    time_tmp += sec_in_year(day, month, year);
    time_epoch = time_tmp;
    time_tm = std::localtime(&time_epoch);
}

DateTime::DateTime(DateTime &datetime) {
    time_epoch = datetime.time_epoch;
    time_tm = std::localtime(&time_epoch);
}

DateTime::~DateTime() = default;

std::string DateTime::getToday() {
    return std::asctime(std::localtime(&time_epoch));
}

std::string DateTime::getYesterday() {
    auto tmp = new std::time_t;
    *tmp = time_epoch;
    *tmp -= SEC_DAY;
    std::string str = std::asctime(std::localtime(tmp));
    delete tmp;
    return str;
}

std::string DateTime::getTomorrow() {
    auto tmp = new std::time_t;
    *tmp = time_epoch;
    *tmp += SEC_DAY;
    std::string str = std::asctime(std::localtime(tmp));
    delete tmp;
    return str;
}

std::string DateTime::getFuture(unsigned int n) {
    auto tmp = new std::time_t;
    *tmp = time_epoch;
    *tmp += n*SEC_DAY;
    std::string str = std::asctime(std::localtime(tmp));
    delete tmp;
    return str;
}

std::string DateTime::getPast(unsigned int n) {
    auto tmp = new std::time_t;
    *tmp = time_epoch;
    *tmp -= n*SEC_DAY;
    std::string str = std::asctime(std::localtime(tmp));
    delete tmp;
    return str;
}

unsigned int DateTime::getDifference(DateTime &datetime) {
    auto *time_tmp = new std::time_t;
    *time_tmp = datetime.time_epoch;
    *time_tmp -= time_epoch;
    if (*time_tmp < 0) {
         *time_tmp *= -1;
    }
    unsigned int diff = (unsigned int) *time_tmp / SEC_DAY;
    delete time_tmp;
    return diff;
}

unsigned int DateTime::sec_in_year(int day, int month, int year) {
    unsigned int seconds = 0;
    switch (month) {
        case 1:
            seconds += 0;
            break;
        case 2:
            seconds += (1 * 31) * SEC_DAY;
            break;
        case 3:
            seconds += (1 * 31) * SEC_DAY;
            break;
        case 4:
            seconds += (2 * 31) * SEC_DAY;
            break;
        case 5:
            seconds += (2 * 31 + 1 * 30) * SEC_DAY;
            break;
        case 6:
            seconds += (3 * 31 + 1 * 30) * SEC_DAY;
            break;
        case 7:
            seconds += (3 * 31 + 2 * 30) * SEC_DAY;
            break;
        case 8:
            seconds += (4 * 31 + 2 * 30) * SEC_DAY;
            break;
        case 9:
            seconds += (5 * 31 + 2 * 30) * SEC_DAY;
            break;
        case 10:
            seconds += (5 * 31 + 3 * 30) * SEC_DAY;
            break;
        case 11:
            seconds += (6 * 31 + 3 * 30) * SEC_DAY;
            break;
        case 12:
            seconds += (6 * 31 + 4 * 30) * SEC_DAY;
            break;
        default:
            break;
    }
    if ((month == 1) || (month == 2)) {
        seconds += (day - 1)*SEC_DAY;
        return seconds;
    } else {
        if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
            seconds += 29*SEC_DAY;
        } else {
            seconds += 28*SEC_DAY;
        }
        seconds += (day - 1)*SEC_DAY;
        return seconds;
    }
}
