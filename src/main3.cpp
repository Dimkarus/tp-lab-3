#include <iostream>
#include <time.h>
#include <string>
#include "DateTime.h"
using namespace std;

int main()
{
	DateTime ex(1,11,2018);
	string exs;
	DateTime ex2(2, 11, 2018);
	int difference;
	exs = ex.getToday();
	cout << exs << endl;
	
	exs = ex.getTomorrow();
	cout << exs << endl;
	
	exs = ex.getYesterday();
	cout << exs << endl;
	
	exs = ex.getFuture(15);
	cout << exs << endl;
	
	exs = ex.getPast(15);
	cout << exs << endl;
	
	difference = ex.getDifference(ex);
	cout << difference << endl;
	
	difference = ex.getDifference(ex2);
	cout << difference << endl;

	/*
	print date as standart format, if 'date_info' is public
	char str[40];
	asctime_s(str, &(ex.date_info));
	cout << str << endl;
	*/
	
    return 0;
}