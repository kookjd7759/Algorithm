#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <cmath>

using namespace std;

int N, M, B, Max = 0, Min = 64;
array<array<int, 501>, 501> Arr;
vector<pair<int, int>> Hight_Time_vec;

bool Comp(const pair<int, int>& x, const pair<int, int>& y) {
	if (x.second == y.second)
		return x.first > y.first;
	else
		return x.second < y.second;
}

void Input() {
	cin >> N >> M >> B;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) {
			cin >> Arr[i][j];
			Max = max(Max, Arr[i][j]);
			Min = min(Min, Arr[i][j]);
		}

	// cout << "Max : " << Max << "\n";
	// cout << "Min : " << Min << "\n\n";
}

int Cal(const int& hight) {
	int time = 0, Block = B;
	// cout << "Selected hight : " << hight << "\n";
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) {
			int num = Arr[i][j] - hight;
			
			if (num < 0) { // 블럭 놓기
				time += abs(num);
				Block -= abs(num);
			}
			else if (num > 0){ // 블럭 제거, 인벤토리에 추가
				time += 2 * abs(num);
				Block += abs(num);
			}

			// cout << "Block : " << Block << "\n";
			// cout << "time : " << time << "\n";
		}

	if (Block < 0)
		return -1;
	else
		return time;
}

void Function() {
	for (int i = Min; i <= Max; i++) {
		int time = Cal(i);

		if (time != -1)
			Hight_Time_vec.push_back({ i, time });

		// cout << "Hight : " << i << "\n";
		// cout << "Time : " << time << "\n\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	Input();
	Function();

	sort(Hight_Time_vec.begin(), Hight_Time_vec.end(), Comp);
	cout << Hight_Time_vec[0].second << " " << Hight_Time_vec[0].first;

	return 0;
}