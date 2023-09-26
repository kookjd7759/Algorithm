#include <iostream>

using namespace std;

int y1, m1, d1;
int y2, m2, d2;

int age_1(){
	int age = y2 - y1;
	if (m1 < m2 || (m1 == m2 && d1 <= d2))
		return age;
	else return age - 1;
}

int age_2(){
	return 1 + (y2 - y1);
}

int age_3(){
	return (y2 - y1);
}

int main() {
	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
	cout << age_1() << "\n" << age_2() << "\n" << age_3() << "\n";
}