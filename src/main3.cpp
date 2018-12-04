#include "DateTime.h"
using namespace std;
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	DateTime a(1, 11, 2011);
	cout << "Сегодня: " << a.getToday() << endl;
	cout << "Завтра: " << a.getTomorrow() << endl;
	cout << "Вчера: " << a.getYesterday() << endl;
	cout << "Через 5 дней: " << a.getFuture(5) << endl;
	cout << "5 Дней назад: " << a.getPast(5) << endl;

}