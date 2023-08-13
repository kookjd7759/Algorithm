#include <iostream>
#include <queue>

using namespace std;

int Place[1001][1001];
int N, M;
queue<pair<int, int>> que_xy;

void Input() {
	bool End = true;
	cin >> M >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) {
			int num; cin >> num;
			Place[i][j] = num;

			if (num == 0)
				End = false;

			if (num == 1)
				que_xy.push(pair<int, int>(j, i));
		}

	if (End) {
		cout << 0;
		exit(0);
	}
}

void Transition(pair<int, int> xy) {
	if (xy.second + 1 < N && Place[xy.second + 1][xy.first] == false) {
		Place[xy.second + 1][xy.first] = true;
		que_xy.push(pair<int, int>(xy.first, xy.second + 1));
	}

	if (xy.first + 1 < M && Place[xy.second][xy.first + 1] == false) {
		Place[xy.second][xy.first + 1] = true;
		que_xy.push(pair<int, int>(xy.first + 1, xy.second));
	}

	if (xy.second - 1 >= 0 && Place[xy.second - 1][xy.first] == false) {
		Place[xy.second - 1][xy.first] = true;
		que_xy.push(pair<int, int>(xy.first, xy.second - 1));
	}

	if (xy.first - 1 >= 0 && Place[xy.second][xy.first - 1] == false) {
		Place[xy.second][xy.first - 1] = true;
		que_xy.push(pair<int, int>(xy.first - 1, xy.second));
	}
}

bool Check() {
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			if (!Place[i][j])
				return false;

	return true;
}

int Function() {
	int Time = 0;

	while (true) {
		int Size = que_xy.size();

		for (int i = 0; i < Size; i++) {
			pair<int, int> xy = que_xy.front();
			que_xy.pop();

			Transition(xy);
		}

		Time++;

		if (Check()) 
			break;
		else
			if (que_xy.size() == 0) {
				cout << -1;
				exit(0);
			}
	}

	return Time;
}

int main() {
	Input();
	cout << Function();
}