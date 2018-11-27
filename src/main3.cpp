#include <iostream>
#include "DateTime.h"
using namespace std;

int main()
{
    DateTime today(27,11,2018), Holiday(1,1,2019);
    cout<<"Today:"<<today.getToday()<<endl;
    cout<<"Tomorrow:"<<today.getTomorrow()<<endl;
    cout<<"Yesterday:"<<today.getYesterday()<<endl;
    cout<<"After 10 day:"<<today.getFuture(10)<<endl;
    cout<<"Holiday:"<<Holiday.getToday()<<endl;
    cout<<"Holiday start after "<<today.getDifference(Holiday)<<"days"<<endl;
	return 0;
}
