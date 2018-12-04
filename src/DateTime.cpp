#include "../include/DateTime.h"

DateTime::DateTime (int day, int mon, int year){

    time = new tm();
    time -> tm_year = year - 1900;
    time -> tm_mday = day;
    time -> tm_mon = mon - 1;
    mktime(time);

}

DateTime::DateTime (tm t){

    time = new tm();
    time -> tm_year = t.tm_year;
    time -> tm_mon = t.tm_mon;
    time -> tm_mday = t.tm_mday;
    mktime(time);

}

DateTime::DateTime (){

    time_t seconds = std::time(NULL);
    time = localtime (&seconds);

}

DateTime::DateTime (const DateTime & obj){

    time -> tm_year = obj.time -> tm_year;
    time -> tm_mon = obj.time -> tm_mon;
    time -> tm_mday = obj.time -> tm_mday;
    mktime(time);

}

string DateTime::getAsString(){

    string a = (time -> tm_mday < 10 ? "0" : "");
    return a.append(to_string(time -> tm_mday)).append(" ").append(mons[time -> tm_mon]).
           append(" ").append(to_string(time -> tm_year + 1900)).append(", ").append(wday[time -> tm_wday]);

}

string DateTime::getToday(){

    return this -> getAsString();

}

DateTime * DateTime::getFuture (unsigned int N){

    time_t a = mktime(time) + N * 24 * 60 * 60;
    tm * ft = localtime (&a);
    return new DateTime(*ft);

}

DateTime * DateTime::getPast(unsigned int N){

    time_t a = mktime(time) - N * 24 * 60 * 60;
    tm * ft = localtime (&a);
    return new DateTime(*ft);

}

string DateTime::getYesterday(){

    return getPast(1) -> getAsString();

}

string DateTime::getTomorrow(){

    return getFuture(1) -> getAsString();

}

int DateTime::getDifference (DateTime & a){

    double d = mktime(time) - mktime(a.time);
    return int(ceil(d/(60 * 60 * 24)));

}
