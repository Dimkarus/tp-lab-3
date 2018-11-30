#include "test1.h"
int main()
{
	setlocale(LC_ALL, "rus");
	double delta=calcDelta();
	cout << "Зазор равен " << delta << " метров" << endl;
	system("pause");
    return 0;
}