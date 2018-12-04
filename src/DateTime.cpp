#include "DateTime.h"

//TODO maybe handle some exceptions?

static const std::string months[12] {"january",
                                     "february",
                                     "march",
                                     "april",
                                     "may",
                                     "june",
                                     "july",
                                     "august",
                                     "september",
                                     "october",
                                     "november",
                                     "december"};

static const std::string weekdays[7] {"sunday",
                                      "monday",
                                      "tuesday",
                                      "wednesday",
                                      "thursday",
                                      "friday",
                                      "saturday"};

DateTime::DateTime() {
    this->time_epoch = std::time(nullptr);
    this->time_tm = std::localtime(&time_epoch);
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
    this->time_epoch = time_tmp;
    this->time_tm = std::localtime(&time_epoch);
}

DateTime::DateTime(DateTime &datetime) {
    this->time_epoch = datetime.time_epoch;
    this->time_tm = std::localtime(&time_epoch);
}

DateTime::~DateTime() = default;

std::string DateTime::getToday() {
    std::string out;
    if (this->time_tm->tm_mday < 10) {
        out.append("0");
        out.append(std::to_string(this->time_tm->tm_mday));
    } else {
        out.append(std::to_string(this->time_tm->tm_mday));
    }
    out.append(" ");
    out.append(months[this->time_tm->tm_mon]);
    out.append(" ");
    out.append(std::to_string(this->time_tm->tm_year + 1900));
    out.append(", ");
    out.append(weekdays[this->time_tm->tm_wday]);
    return out;
}

std::string DateTime::getYesterday() {
    return this->getPast(1);
}

std::string DateTime::getTomorrow() {
    return this->getFuture(1);
}

std::string DateTime::getPast(unsigned int n) {
    auto tmp = new std::time_t;
    *tmp = this->time_epoch;
    *tmp -= n*SEC_DAY;
    auto tmp_struct = std::localtime(tmp);
    std::string out;
    if (tmp_struct->tm_mday < 10) {
        out.append("0");
        out.append(std::to_string(tmp_struct->tm_mday));
    } else {
        out.append(std::to_string(tmp_struct->tm_mday));
    }
    out.append(" ");
    out.append(months[tmp_struct->tm_mon]);
    out.append(" ");
    out.append(std::to_string(tmp_struct->tm_year + 1900));
    out.append(", ");
    out.append(weekdays[tmp_struct->tm_wday]);
    *tmp += n*SEC_DAY;
    tmp_struct = std::localtime(tmp);
    delete tmp;
    return out;
}

std::string DateTime::getFuture(unsigned int n) {
    auto tmp = new std::time_t;
    *tmp = this->time_epoch;
    *tmp += n*SEC_DAY;
    auto tmp_struct = std::localtime(tmp);
    std::string out;
    if (tmp_struct->tm_mday < 10) {
        out.append("0");
        out.append(std::to_string(tmp_struct->tm_mday));
    } else {
        out.append(std::to_string(tmp_struct->tm_mday));
    }
    out.append(" ");
    out.append(months[tmp_struct->tm_mon]);
    out.append(" ");
    out.append(std::to_string(tmp_struct->tm_year + 1900));
    out.append(", ");
    out.append(weekdays[tmp_struct->tm_wday]);
    *tmp -= n*SEC_DAY;
    tmp_struct = std::localtime(tmp);
    delete tmp;
    return out;
}

unsigned int DateTime::getDifference(DateTime &datetime) {
    auto *time_tmp = new std::time_t;
    *time_tmp = datetime.time_epoch;
    *time_tmp -= this->time_epoch;
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
