#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;
class DateTime {
private:
	time_t now_time;
	string str_time;
public: 
	DateTime(unsigned int, unsigned int, unsigned int); 
	DateTime();
	DateTime(const DateTime&);  
	string getToday();   
	string getYesterday();  
	string getTomorrow();    
	string getFuture(unsigned int);  
	string getPast(unsigned int);    
	unsigned int getDifference(DateTime&);   

};