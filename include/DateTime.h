//
// Created by Константин Чернышев on 21.11.18.
//

#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H


#include <string>
#include <ctime>
#include <vector>


class DateTime {
private:
    unsigned int day;
    unsigned int month;
    unsigned int year;
    static const std::vector<std::string> DAYS;
    static const std::vector<std::string> MONTHS;
    std::string getDayName(unsigned int, unsigned int, unsigned int);
    std::string getNameOfDay(unsigned int, unsigned int, unsigned int);
    static unsigned int g(unsigned int, unsigned int, unsigned int);
    static void d(unsigned int, unsigned int&, unsigned int&, unsigned int&);

public:
    DateTime(unsigned int, unsigned int, unsigned int);  //конструктор с тремя числовыми параметрами (день, месяц,год);
    DateTime();  // конструктор без параметров (объект использует текущую дату);
    DateTime(const DateTime &);  //конструктор копирования (создаём копию другого объекта);
    std::string getToday();  //  возвращение текущей даты в виде строки, с указанием дня недели и названия месяца (например 07 november 2018, wedensday);
    std::string getYesterday();  // возвращение даты вчерашнего дня в виде строки
    std::string getTomorrow();  // возвращение даты завтрашнего дня в виде строки.
    std::string getFuture(unsigned int n);  // возвращение даты через N дней в будущем;
    std::string getPast(unsigned int n);  // возвращение даты через N дней в прошлом;
    int calcDifference(DateTime&);  // для расчёта разницы (в днях) между двумя датами
    int getDifference(DateTime&);  // для расчёта разницы (в днях) между двумя датами

    const unsigned int getDay() const;
    const unsigned int getMonth() const;
    const unsigned int getYear() const;
};


#endif //TASK1_DATETIME_H
