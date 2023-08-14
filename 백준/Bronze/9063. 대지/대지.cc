#include <iostream>

using namespace std;

int main() {
	int size; cin >> size;
	int x, y; cin >> x >> y;
	int MAXY = y, MINY = y, MAXX = x, MINX = x;

	for (int i = 0; i < size - 1; i++) {
		cin >> x >> y;
		if (y > MAXY)
			MAXY = y;
		else if (y < MINY)
			MINY = y;

		if (x > MAXX)
			MAXX = x;
		else if (x < MINX)
			MINX = x;
	}

	cout << (MAXX - MINX) * (MAXY - MINY);
}

