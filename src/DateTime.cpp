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
  string mon_str;
  if (date->tm_mon==0) mon_str="january";
  else if (date->tm_mon==1) mon_str="february";
  else if (date->tm_mon==2) mon_str="march";
  else if (date->tm_mon==3) mon_str="april";
  else if (date->tm_mon==4) mon_str="may";
  else if (date->tm_mon==5) mon_str="june";
  else if (date->tm_mon==6) mon_str="july";
  else if (date->tm_mon==7) mon_str="august";
  else if (date->tm_mon==8) mon_str="september";
  else if (date->tm_mon==9) mon_str="october";
  else if (date->tm_mon==10) mon_str="november";
  else if (date->tm_mon==11) mon_str="december";
  string wdstr;
  if (date->tm_wday==0) wdstr="sunday";
  else if (date->tm_wday==1) wdstr="monday";
  else if (date->tm_wday==2) wdstr="tuesday";
  else if (date->tm_wday==3) wdstr="wednesday";
  else if (date->tm_wday==4) wdstr="thursday";
  else if (date->tm_wday==5) wdstr="friday";
  else if (date->tm_wday==6) wdstr="saturday";
  stringstream temp;
  //temp << 55;
  temp << date->tm_mday <<" "<< mon_str << " " << date->tm_year+1900 << ", " << wdstr;
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
