
#include "DateTime.h"

using namespace std;

string createStr(time_t a)
{
	time_t temp = a;
	string ans;
	tm * timeinfo;
	timeinfo = localtime(&temp);
	char arr[80];
	strftime(arr, 80, "%d %B %Y, %A", timeinfo);
	ans = arr;
	return ans;
}

	DateTime::DateTime() {
		time(&t);
	}

	DateTime::DateTime(int d, int m, int y)
	{
		time_t tempSec; //ïðåìåííàÿ äëÿ õðàíåíèÿ ñåêóíä 
		time(&tempSec); //ñòàâèì íàñòîÿùåå âðåìÿ
		tm *temp = localtime(&tempSec); // ñîçäàåì ñòðóêòóðó äàòû
		//ìåíÿåì ñòðóêòóðó ïîä âõîäíûå äàííûå
		temp->tm_mday = d;
		temp->tm_mon = m - 1;
		temp->tm_year = y - 1900;
		t = mktime(temp);
	}

	string DateTime::getToday() {
		
		return createStr(t);
	}

	string DateTime::getYesterday() {
		time_t temp = t;
		temp = temp - 86400;
		return createStr(temp);
	}

	string DateTime::getTomorrow() {
		time_t temp = t;
		temp = temp + 86400;
		return createStr(temp);
	}

	string DateTime::getFuture(unsigned int N) {
		time_t temp = t;
		temp = temp + 86400 * N;
		return createStr(temp);
	}

	string DateTime::getPast(unsigned int N) {
		time_t temp = t;
		temp = temp - 86400 * N;
		return createStr(temp);
	}

	int DateTime::getDifference(DateTime &dt) {
		int N;
		N = ((*this).t - dt.t) / 86400;
		return N;
	}
