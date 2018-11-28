#include <ctime>

#include "../include/DateTime.h"
//DAY_CONST = 86400 (24 * 60 * 60)

/*=========== [Функция возвращает конечный результат строки] ===========*/
string FormatDate(time_t current_time)
{
	const int size = 80;//Максимальный размер символов
	const char* format = "%d %B %Y, %A";//Формат показа даты
	char str[size];//Результатирующая строка с датой размером size символов
	tm* timeinfo = localtime(&current_time);//Текущее локальное время и дата

	strftime(str, size, format, timeinfo);//Форматирование результатирующей строки

	for (int i = 0; i < strlen(str); i++)
	{
		if (isupper(str[i])) str[i] = tolower(str[i]);//Сбрасываем в нижний регистр
	}
	return str;//Возвращаем готовую результатирующую строку
}
/*=========== [Конструктор по умолчанию] ===========*/
DateTime::DateTime()
{
	time(&now);//Текущее календарное время системы
	tm * t = localtime(&now);//Текущее локальное время и дата
}
/*=========== [Конструктор с 3мя параметрами] ===========*/
DateTime::DateTime(int day, int month, int year)
{
	struct tm * timeinfo;
	time(&now);//Текущее календарное время системы
	timeinfo = localtime(&now);//Текущее локальное время и дата
	timeinfo->tm_year = year - 1900;//Год
	timeinfo->tm_mon = month - 1;//Месяц
	timeinfo->tm_mday = day;//День
	now = mktime(timeinfo);//
}
/*=========== [Конструктор копирования] ===========*/
DateTime::DateTime(DateTime& date_obj)
{
	now = date_obj.now;
}
/*=========== [Метод: getToday] ===========*/
string DateTime::getToday()
{
	time_t now = DateTime::now;
	return FormatDate(now);
}
/*=========== [Метод: getYesterday] ===========*/
string DateTime::getYesterday()
{
	time_t now = (DateTime::now) - DAY_CONST;
	return FormatDate(now);
}
/*=========== [Метод: getTomorrow] ===========*/
string DateTime::getTomorrow()
{
	time_t now = (DateTime::now) + DAY_CONST;
	return FormatDate(now);
}
/*=========== [Метод: getFuture] ===========*/
string DateTime::getFuture(unsigned int N)
{
	time_t now = (DateTime::now) + (DAY_CONST * N);
	return FormatDate(now);
}
/*=========== [Метод: getPast] ===========*/
string DateTime::getPast(unsigned int N)
{
	time_t now = (DateTime::now) - (DAY_CONST * N);
	return FormatDate(now);
}
/*=========== [Метод: getDifference] ===========*/
int DateTime::getDifference(DateTime &d)
{
	int days = 0;
	time_t now1 = d.now;
	time_t now2 = DateTime::now;
	days = (abs(now2 - now1)) / DAY_CONST;
	return days;
}