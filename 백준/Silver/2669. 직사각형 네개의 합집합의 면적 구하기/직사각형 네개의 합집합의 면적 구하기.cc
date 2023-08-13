#include <iostream>

using namespace std;

struct Point {
	pair<int, int> x;
	pair<int, int> y;
};

int main() {
	Point point[4];
	bool Borad[100][100]{};

	for (int i = 0; i < 4; i++) {
		cin >> point[i].x.first >> point[i].x.second >> point[i].y.first >> point[i].y.second;

		for (int j = point[i].x.first; j < point[i].y.first; j++)
			for (int k = point[i].x.second; k < point[i].y.second; k++)
				Borad[j][k] = true;
	}

	int count = 0;

	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			if (Borad[i][j])
				count++;

	cout << count;

	return 0;
}