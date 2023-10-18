#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string point[101];
	for (int i = 0; i <= 100; i++) {
		if (i <= 59) point[i] = "F";
		else if (i <= 66) point[i] = "D";
		else if (i <= 69) point[i] = "D+";
		else if (i <= 76) point[i] = "C";
		else if (i <= 79) point[i] = "C+";
		else if (i <= 86) point[i] = "B";
		else if (i <= 89) point[i] = "B+";
		else if (i <= 96) point[i] = "A";
		else if (i <= 100) point[i] = "A+";
	}
	int n; cin >> n;
	while (n--) {
		string st; int p; cin >> st >> p;
		cout << st << " " << point[p] << "\n";
	}
}