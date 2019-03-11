//
// Created by Alexander on 06.03.2019.
//

#include <iostream>
#include <ctime>
#include"/Users/AlexSlav/Shtanuk/tp-lab-3/include/DateTime.h"
using  namespace std;
int main()
{
    DateTime dt(31,10,2018);
    DateTime d1(5,6,1979);
    DateTime dt2(1,11,2018);
    string b = dt.getTomorrow();
    string a = dt2.getToday();
    cout <<  dt.getDifference(d1)<< endl;
    cout<< b << endl << a ;
    return 0;
}
