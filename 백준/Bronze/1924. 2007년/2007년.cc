#include <iostream>

using namespace std;

int main() {
	string st[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int monthDay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int x, y; cin >> x >> y;
	int day(0);
	for (int i = 0; i < x - 1; i++) 
		day += monthDay[i];
	day += y;
	cout << st[day % 7];
}