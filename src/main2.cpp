#include <iostream>
#include <cstdio>
#include "task1.h"
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << " ��������� ���������� = " << calcCost() << "p" << endl;
	system("pause");
}