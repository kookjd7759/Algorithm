#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N, K; cin >> N >> K;
	int count = 0;
	vector<pair<int, int>> vec;

	for (int i = 0; i < N; i++) {
		pair<int, int> ans; cin >> ans.first; ans.second = 0;
		vec.push_back(ans);
	}

	for (int i = vec.size() - 1; i >= 0; i--) {
		int j = 0;
		if (vec.at(i).first <= K)
			while (true) {
				j++;
				if (vec.at(i).first * j > K) {
					j--;
					break; 
				}
			}

		K -= vec.at(i).first * j;

		vec.at(i).second = j;
	}

	int sum = 0;
	for (int i = 0; i < vec.size(); i++)
		sum += vec.at(i).second;

	cout << sum;

	return 0;
}