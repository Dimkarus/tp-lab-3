//
// Created by Константин Чернышев on 21.11.18.
//

#include <iomanip>
#include <sstream>
#import "DateTime.h"


const std::vector<std::string> DateTime::DAYS{"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
const std::vector<std::string> DateTime::MONTHS{"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};


DateTime::DateTime(unsigned int day, unsigned int month, unsigned int year) {
    this->day = day;
    this->month = month-1;
    this->year = year;
}

DateTime::DateTime() {
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    this->day = (unsigned int)(now->tm_mday);
    this->month = (unsigned int)(now->tm_mon);
    this->year = (unsigned int)(now->tm_year + 1900);
}

DateTime::DateTime(const DateTime &dateTime) {
    this->day = dateTime.getDay();
    this->month = dateTime.getMonth();
    this->year = dateTime.getYear();
}

const unsigned int DateTime::getDay() const {
    return this->day;
}

const unsigned int DateTime::getMonth() const {
    return this->month;
}

const unsigned int DateTime::getYear() const {
    return this->year;
}

std::string DateTime::getDayName(unsigned int day, unsigned int month, unsigned int year) {
    return DateTime::DAYS[(g(day, month, year) + 6) % 7];
}

unsigned int DateTime::g(unsigned int day, unsigned int month, unsigned int year) {
    //Rata date algorithm encoding
    month++;
    if (month < 3) {
        year--;
        month += 12;
    }

    return 365*year + year/4 - year/100 + year/400 + (153*month - 457)/5 + day - 306;
}



void DateTime::d(unsigned int gr, unsigned int &day, unsigned int &month, unsigned int &year) {
    //Rata date algorithm decoding

    unsigned int Z = gr + 306;
    unsigned int H = 100 * Z - 25;
    unsigned int A = H / 3652425;
    unsigned int B = A - A / 4;
    year = (100 * B + H) / 36525;
    unsigned int C = B + Z - 365 * year - year / 4;


    month = (5 * C + 456) / 153;
    day = C - (153 * (month ) - 457) / 5;
    month--;

    if (month >= 12) {
        year = year + 1;
        month = month - 12;
    }
}

std::string DateTime::getNameOfDay(unsigned int day, unsigned int month, unsigned int year) {
    std::string monthName = DateTime::MONTHS[month];
    std::string dayName = getDayName(day, month, year);
    std::ostringstream dayNum;
    dayNum << std::setw(2) << std::setfill('0') << std::to_string(day);

    return "" + dayNum.str() + " " + monthName + " " + std::to_string(year) + ", " + dayName;
}

std::string DateTime::getToday() {
    return getNameOfDay(this->getDay(), this->getMonth(), this->getYear());
}

std::string DateTime::getPast(unsigned int n) {
    unsigned int day;
    unsigned int month;
    unsigned int year;

    DateTime::d( this->g(this->day, this->month, this->year) - n, day, month, year);

    return getNameOfDay(day, month, year);
}

std::string DateTime::getFuture(unsigned int n) {
    unsigned int day;
    unsigned int month;
    unsigned int year;

    DateTime::d( DateTime::g(this->day, this->month, this->year) + n, day, month, year);

    return getNameOfDay(day, month, year);
}

std::string DateTime::getYesterday() {
    return this->getPast(1);
}

std::string DateTime::getTomorrow() {
    return this->getFuture(1);
}

int DateTime::getDifference(DateTime &dateTime) {

    return DateTime::g(this->day,this->month,this->year) - DateTime::g(dateTime.getDay(),dateTime.getMonth(),dateTime.getYear());
}

int DateTime::calcDifference(DateTime &dateTime) {

    return getDifference(dateTime);
}

