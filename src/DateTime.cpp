//
// Created by dlots on 13.02.19.
//

#include "DateTime.h"

DateTime::DateTime(int day, int month, int year) {
  struct tm *temp_tm;
  time(&storage);
  temp_tm=localtime(&storage);
  temp_tm->tm_year=year-1900;
  temp_tm->tm_mon=month-1;
  temp_tm->tm_mday=day;
  storage=mktime(temp_tm);
}

DateTime::DateTime() {
  time(&storage);
}

DateTime::DateTime(const DateTime& copythat) {
  storage=copythat.storage;
}

string return_str(tm *date) {
  //int wdint =date->tm_wday;
  string wdstr;
  if (date->tm_wday==0) wdstr="Sunday";
  else if (date->tm_wday==1) wdstr="Monday";
  else if (date->tm_wday==2) wdstr="Tuesday";
  else if (date->tm_wday==3) wdstr="Wednesday";
  else if (date->tm_wday==4) wdstr="Thursday";
  else if (date->tm_wday==5) wdstr="Friday";
  else if (date->tm_wday==6) wdstr="Saturday";
  stringstream temp;
  //temp << 55;
  temp << date->tm_mday <<"."<<date->tm_mon+1 << "." << date->tm_year+1900 << ", " << wdstr;
  string output = temp.str();
  return output;
}

/*void DateTime::testfun() {
  struct tm *temp_tm;
  temp_tm=localtime(&storage);
  temp_tm->tm_mday+=5;
  time_t temptime=mktime(temp_tm);
  temp_tm=localtime(&temptime);

  cout << temp_tm->tm_mday << " ";
  cout << temp_tm->tm_mon+1 << " ";
  cout << temp_tm->tm_year+1900 << " ";
  int weekday=temp_tm->tm_wday;
  cout << temp_tm->tm_wday;
  //cout << weekday << " ";
}*/

string DateTime::getToday() {
  struct tm *temp_tm;
  temp_tm=localtime(&storage);
  return return_str(temp_tm);
}

string DateTime::getYesterday() {
  struct tm *temp_tm;
  temp_tm=localtime(&storage);
  temp_tm->tm_mday-=1;
  time_t temptime=mktime(temp_tm);
  temp_tm=localtime(&temptime);
  return return_str(temp_tm);
}

string DateTime::getTomorrow() {
  struct tm *temp_tm;
  temp_tm=localtime(&storage);
  temp_tm->tm_mday+=1;
  time_t temptime=mktime(temp_tm);
  temp_tm=localtime(&temptime);
  return return_str(temp_tm);
}

string DateTime::getFuture(unsigned int N) {
  struct tm *temp_tm;
  temp_tm=localtime(&storage);
  temp_tm->tm_mday+=N;
  time_t temptime=mktime(temp_tm);
  temp_tm=localtime(&temptime);
  return return_str(temp_tm);
}

string DateTime::getPast(unsigned int N) {
  struct tm *temp_tm;
  temp_tm=localtime(&storage);
  temp_tm->tm_mday-=N;
  time_t temptime=mktime(temp_tm);
  temp_tm=localtime(&temptime);
  return return_str(temp_tm);
}

string DateTime::getDifference(DateTime& compare) {
    time_t diff = storage - compare.storage;
    //localtime(&diff);
		diff =abs(diff/ 86400);
    stringstream temp;
    temp << diff;
    string result = temp.str();
		return result;
}
