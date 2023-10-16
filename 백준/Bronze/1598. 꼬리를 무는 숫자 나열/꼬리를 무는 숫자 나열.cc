#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a, b; cin >> a >> b; a--; b--;
	int ax = a % 4, ay = a / 4;
	int bx = b % 4, by = b / 4;
	cout << abs(ax - bx) + abs(ay - by);
}