//
// Created by Alexander on 06.03.2019.
//

#include <iostream>
#include <ctime>
#include"/Users/AlexSlav/Shtanuk/tp-lab-3/include/DateTime.h"
using  namespace std;
int main()
{
    DateTime dt(2,12,1978);
    DateTime d1(5,6,1979);
    string b = dt.getToday();
    string a = dt.getFuture(10);
    cout <<  dt.getDifference(d1)<< endl;
    cout<< b << endl << a ;
    return 0;
}
