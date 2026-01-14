#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;
	
	map<int, pair<int, int>> m;
	for (int i = 0; i < 7; ++i) for (int j = i + 1; j <= 7; ++j)
		m.insert({ pow(2, i) + pow(2, j), make_pair(i, j) });

	int N; cin >> N;
	int keys[8]; for (int i = 0; i < 8; ++i) keys[i] = i;
	for (int i = 0; i < N; ++i) {
		int n; cin >> n;
		if (m.count(n))
			swap(keys[m[n].first], keys[m[n].second]);
	}
	int k; cin >> k;
	cout << keys[k];

	return 0;
}
