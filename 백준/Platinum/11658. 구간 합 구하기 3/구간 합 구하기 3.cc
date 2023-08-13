#include <iostream>

using namespace std;

int arr[1025][1025]{};
int DP[1025][1025]{};
int Size, Command;

void Input() {
	cin >> Size >> Command;
	for (int i = 1; i <= Size; i++)
		for (int j = 1; j <= Size; j++) {
			cin >> arr[i][j];
			DP[i][j] += DP[i][j - 1] + arr[i][j];
		}
}

void Sumation() {
	int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
	int Sum = 0;

	for (int j = x1; j <= x2; j++)
		Sum += DP[j][y2] - DP[j][y1 - 1];

	cout << Sum << "\n";
}

void Function() {
	while (Command--) {
		int w; cin >> w;

		if (w == 0) {
			int x, y, c; cin >> x >> y >> c;
			int Num = c - arr[x][y];

			for (int i = y; i <= Size; i++)
				DP[x][i] += Num;

			arr[x][y] = c;
		}
		else
			Sumation();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	Input();
	Function();
}