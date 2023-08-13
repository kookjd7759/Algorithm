#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Func(int left, int right, int target, const vector<int>& vec) {
	while (left < right) {
		int mid = (left + right) / 2;

		if (target < vec[mid])
			right = mid - 1;
		else if (target > vec[mid])
			left = mid + 1;
		else
			break;
	}

	if (target == vec[(left + right) / 2])
		cout << "1 \n";
	else
		cout << "0 \n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	vector<int> vec_N;
	for (int i = 0; i < N; i++) {
		int num; cin >> num;
		vec_N.push_back(num);
	}

	sort(vec_N.begin(), vec_N.end());

	int M; cin >> M;
	for (int i = 0; i < M; i++) {
		int target; cin >> target;
		Func(0, N - 1, target, vec_N);
	}

	return 0;
}