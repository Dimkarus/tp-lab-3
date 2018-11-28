#include <iostream>
#include <string>

#include "../include/task1.h"
#include "../include/DateTime.h"

using namespace std;

int main()
{
	//Объекты
	DateTime dt(1, 11, 2018);//Дата как в задании
	string date_1 = dt.getTomorrow();//Следующий день после dt
	string date_2 = dt.getToday();//Текущий день dt
	string date_3 = dt.getFuture(3);//Дата через N дней в будущем после dt
	string date_4 = dt.getPast(3);//Дата через N дней в прошлом после dt

	DateTime dt1(27, 11, 2018);//Дата для вывода разницы 1
	DateTime dt2(28, 11, 2018);//Дата для вывода разницы 2
	DateTime dt3(dt2);//Задействуем конструктор копирования

	int difference = dt2.getDifference(dt1);//Разница между dt_1 и dt_2 датами
	string dt_3_current = dt3.getToday();//Выводим "текущую дату" 28 ноября 2018 года

	//Вывод результатов на экран
	cout << date_1 << endl;
	cout << date_2 << endl;
	cout << date_3 << endl;
	cout << date_4 << endl;

	cout << difference << std::endl;
	cout << dt_3_current << std::endl;
	return 0;
}