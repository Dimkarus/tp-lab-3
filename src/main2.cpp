#include "test1.h"
int main()
{
	setlocale(LC_ALL, "rus");
	double cost=calcCost();
	cout <<"стоимость бассейна равна "<<cost<<endl;
	system("pause");
    return 0;
}