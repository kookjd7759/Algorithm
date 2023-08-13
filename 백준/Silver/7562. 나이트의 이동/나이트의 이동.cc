#include <iostream>
#include <queue>

using namespace std;

int L;
bool Space[304][304]{};
pair<int, int> NowPos_xy, TargetPos_xy;

void ResetSpace() {
	for (int i = 2; i < L - 2; i++)
		for (int j = 2; j < L - 2; j++)
			Space[j][i] = true;
}

void Input() {
	cin >> L;
	cin >> NowPos_xy.first >> NowPos_xy.second;
	cin >> TargetPos_xy.first >> TargetPos_xy.second;
	L += 4;

	ResetSpace();

	NowPos_xy.first += 2;
	NowPos_xy.second += 2;
	TargetPos_xy.first += 2;
	TargetPos_xy.second += 2;
	Space[NowPos_xy.first][NowPos_xy.second] = false;
}

void Check(queue<pair<int, int>>& que, int x, int y) {
	if (Space[x][y]) {
		que.push(pair<int, int>(x, y));
		Space[x][y] = false;
	}
}

void Solve(queue<pair<int, int>>& que) {
	int Size = que.size();

	for (int i = 0; i < Size; i++) {
		int x, y;
		x = que.front().first;
		y = que.front().second;

		Check(que, x + 1, y - 2);
		Check(que, x + 2, y - 1);
		Check(que, x + 2, y + 1);
		Check(que, x + 1, y + 2);
		Check(que, x - 1, y + 2);
		Check(que, x - 2, y + 1);
		Check(que, x - 2, y - 1);
		Check(que, x - 1, y - 2);

		que.pop();
	}
}

void Function() {
	int Count = 0;
	queue<pair<int, int>> que;
	que.push(NowPos_xy);

	while (Space[TargetPos_xy.first][TargetPos_xy.second]) {
		Solve(que);
		Count++;
	}

	cout << Count << "\n";
}

int main() {
	int TestCase; cin >> TestCase;

	while (TestCase--) {
		Input();
		Function();
	}
}