#include <iostream>

using namespace std;

int main() {
	int p, c; cin >> p >> c;
	int point = (p * 50) - (c * 10);
	if (p > c) point += 500;
	cout << point;
}