#include "DateTime.h"
using namespace std;


int main() {
	DateTime a(1, 11, 2011);
	cout << "Today: " << a.getToday() << endl;
	cout << "Tomorrow: " << a.getTomorrow() << endl;
	cout << "Yesterday: " << a.getYesterday() << endl;
	cout << "5 days to the future: " << a.getFuture(5) << endl;
	cout << "5 days to the past: " << a.getPast(5) << endl;

}