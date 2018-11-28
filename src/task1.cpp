#define EARTH_RADIUS 6378.1

#include <iostream>


#include "../include/task1.h"
#include "../include/Circle.h"
using namespace std;

/*====== [�������: ������ ������ ����� ������ � ��������] ======*/
double calcDelta()
{
	Circle circle;//������(���������) ������
	circle.setRadius(EARTH_RADIUS);//��������� �������, "��������� ����"
	circle.setFerence(circle.getFerence() + 0.001);//��������� ����� ����������
	return (circle.getRadius() - EARTH_RADIUS) * 1000; //������ ����������������� (�� �� � �) ���������
}
/*====== [�������: ������ ��������� ��������] ======*/
double calcCost()
{
	Circle circle_1(3);
	Circle circle_2(4);
	double square_1 = circle_1.getArea();
	double square_2 = circle_2.getArea();
	double costBeton = (square_2 - square_1) * 1000;
	double costOgrada = circle_2.getFerence() * 2000;
	return (costBeton + costOgrada);
}