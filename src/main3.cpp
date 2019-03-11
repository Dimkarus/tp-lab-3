//
// Created by Alexander on 06.03.2019.
//

#include <iostream>
#include <ctime>
#include"DateTime.h"
using  namespace std;
int main()
{
    DateTime dt(1, 11, 2018);
    string b = dt.getToday();
    cout<< b;
    return 0;
}
