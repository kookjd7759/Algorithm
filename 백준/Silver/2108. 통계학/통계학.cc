#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool Comp(const int x, const int y) {
	return x < y;
}

int main() { 
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	vector<int> vec;
	int Arr[8002]{};

	double sum = 0.0f;
	for (int i = 0; i < N; i++) {
		int ans; cin >> ans;
		vec.push_back(ans);
		sum += ans;
		Arr[ans + 4000]++;
	}

	sort(vec.begin(), vec.end(), Comp);

	pair<int, int> min; min.second = 0;
	for (int i = 0; i < 8002; i++) {
		if (min.second < Arr[i]) {
			min.first = i - 4000;
			min.second = Arr[i];
		}
	}

	cout << floor((sum / N) + 0.5) << "\n";
	cout << vec.at(N / 2) << "\n";
	for (int i = 0; i < 8002; i++) {
		if (min.second == Arr[i] && min.first != i - 4000) {
			if (min.first < i - 4000) {
				min.first = i - 4000;
				break;
			}
		}
	}
	cout << min.first << "\n";
	cout << vec.at(N - 1) - vec.at(0) << "\n";

    return 0;
}