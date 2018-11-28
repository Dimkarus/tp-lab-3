#define EARTH_RADIUS 6378.1

#include <iostream>


#include "../include/task1.h"
#include "../include/Circle.h"
using namespace std;

/*====== [Функция: Расчет зазора между землей и веревкой] ======*/
double calcDelta()
{
	Circle circle;//объект(экземпляр) класса
	circle.setRadius(EARTH_RADIUS);//установка радиуса, "принятого нами"
	circle.setFerence(circle.getFerence() + 0.001);//установка длины окружности
	return (circle.getRadius() - EARTH_RADIUS) * 1000; //вернем сконвертированный (из км в м) результат
}
/*====== [Функция: Расчет стоимости бассейна] ======*/
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