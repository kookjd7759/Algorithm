#include <iostream>
#include <ctime>

using namespace std;

#pragma warning(disable: 4996)

int main() {
	time_t timer = time(NULL);
	struct tm* t = localtime(&timer);
	int y = t->tm_year + 1900;
	int m = t->tm_mon + 1;
	int d = t->tm_mday;
	cout << y << "-";
	if (m < 10) cout << "0"; 
	cout << m << "-";
	if (d < 10) cout << "0";
	cout << d;
}