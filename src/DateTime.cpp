#include <ctime>

#include "../include/DateTime.h"
//DAY_CONST = 86400 (24 * 60 * 60)

/*=========== [������� ���������� �������� ��������� ������] ===========*/
string FormatDate(time_t current_time)
{
	const int size = 80;//������������ ������ ��������
	const char* format = "%d %B %Y, %A";//������ ������ ����
	char str[size];//���������������� ������ � ����� �������� size ��������
	tm* timeinfo = localtime(&current_time);//������� ��������� ����� � ����

	strftime(str, size, format, timeinfo);//�������������� ���������������� ������

	for (int i = 0; i < strlen(str); i++)
	{
		if (isupper(str[i])) str[i] = tolower(str[i]);//���������� � ������ �������
	}
	return str;//���������� ������� ���������������� ������
}
/*=========== [����������� �� ���������] ===========*/
DateTime::DateTime()
{
	time(&now);//������� ����������� ����� �������
	tm * t = localtime(&now);//������� ��������� ����� � ����
}
/*=========== [����������� � 3�� �����������] ===========*/
DateTime::DateTime(int day, int month, int year)
{
	struct tm * timeinfo;
	time(&now);//������� ����������� ����� �������
	timeinfo = localtime(&now);//������� ��������� ����� � ����
	timeinfo->tm_year = year - 1900;//���
	timeinfo->tm_mon = month - 1;//�����
	timeinfo->tm_mday = day;//����
	now = mktime(timeinfo);//
}
/*=========== [����������� �����������] ===========*/
DateTime::DateTime(DateTime& date_obj)
{
	now = date_obj.now;
}
/*=========== [�����: getToday] ===========*/
string DateTime::getToday()
{
	time_t now = DateTime::now;
	return FormatDate(now);
}
/*=========== [�����: getYesterday] ===========*/
string DateTime::getYesterday()
{
	time_t now = (DateTime::now) - DAY_CONST;
	return FormatDate(now);
}
/*=========== [�����: getTomorrow] ===========*/
string DateTime::getTomorrow()
{
	time_t now = (DateTime::now) + DAY_CONST;
	return FormatDate(now);
}
/*=========== [�����: getFuture] ===========*/
string DateTime::getFuture(unsigned int N)
{
	time_t now = (DateTime::now) + (DAY_CONST * N);
	return FormatDate(now);
}
/*=========== [�����: getPast] ===========*/
string DateTime::getPast(unsigned int N)
{
	time_t now = (DateTime::now) - (DAY_CONST * N);
	return FormatDate(now);
}
/*=========== [�����: getDifference] ===========*/
int DateTime::getDifference(DateTime &d)
{
	int days = 0;
	time_t now1 = d.now;
	time_t now2 = DateTime::now;
	days = (abs(now2 - now1)) / DAY_CONST;
	return days;
}