#include <iostream>
#include <string>

#include "../include/task1.h"
#include "../include/DateTime.h"

using namespace std;

int main()
{
	//�������
	DateTime dt(1, 11, 2018);//���� ��� � �������
	string date_1 = dt.getTomorrow();//��������� ���� ����� dt
	string date_2 = dt.getToday();//������� ���� dt
	string date_3 = dt.getFuture(3);//���� ����� N ���� � ������� ����� dt
	string date_4 = dt.getPast(3);//���� ����� N ���� � ������� ����� dt

	DateTime dt1(27, 11, 2018);//���� ��� ������ ������� 1
	DateTime dt2(28, 11, 2018);//���� ��� ������ ������� 2
	DateTime dt3(dt2);//����������� ����������� �����������

	int difference = dt2.getDifference(dt1);//������� ����� dt_1 � dt_2 ������
	string dt_3_current = dt3.getToday();//������� "������� ����" 28 ������ 2018 ����

	//����� ����������� �� �����
	cout << date_1 << endl;
	cout << date_2 << endl;
	cout << date_3 << endl;
	cout << date_4 << endl;

	cout << difference << std::endl;
	cout << dt_3_current << std::endl;
	return 0;
}