#include "DateTime.h"
using namespace std;
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	DateTime a(1, 11, 2011);
	cout << "�������: " << a.getToday() << endl;
	cout << "������: " << a.getTomorrow() << endl;
	cout << "�����: " << a.getYesterday() << endl;
	cout << "����� 5 ����: " << a.getFuture(5) << endl;
	cout << "5 ���� �����: " << a.getPast(5) << endl;

}