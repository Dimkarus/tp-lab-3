#include <DateTime.h>

#include <iostream>


using namespace std;


int main()
{
    DateTime today, date(1, 3, 2019);
    cout << "Today: " << today.getToday() << endl << "Tomorrow: " << today.getTomorrow() << endl
         << "Yesterday: " << today.getYesterday() << endl;
    cout << "Another date: " << date.getToday() << endl
         << "Difference with today: " << date.getDifference(today) << endl;
    cout << "Today + 8: " << today.getFuture(8).getToday() << endl;
    cout << "Today - 10: " << today.getPast(10).getToday() << endl;
    return 0;
}


