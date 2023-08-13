#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> vec_start_end;

bool Comp(const pair<int, int>& x, const pair<int, int> y) {
	if (x.second == y.second)
		return x.first < y.first;
	else
		return x.second < y.second;
}

void InputInVec(int Size) {
	for (int i = 0; i < Size; i++) {
		pair<int, int> pair_start_end;
		cin >> pair_start_end.first;
		cin >> pair_start_end.second;
		vec_start_end.push_back(pair_start_end);
	}
}

int Func(int Size) {
	InputInVec(Size);
	sort(vec_start_end.begin(), vec_start_end.end(), Comp);
	int Count = 1;

	int num = vec_start_end[0].second;
	for (int i = 1; i < vec_start_end.size(); i++) {
		if (num <= vec_start_end[i].first) {
			Count++;
			num = vec_start_end[i].second;
		}
	}
	return Count;
}

int main() {
	int Size; cin >> Size;
	cout << Func(Size);

	return 0;
}