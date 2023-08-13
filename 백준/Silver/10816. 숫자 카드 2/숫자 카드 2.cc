#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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
		int num; cin >> num; 
		cout << upper_bound(vec_N.begin(), vec_N.end(), num) - lower_bound(vec_N.begin(), vec_N.end(), num) << " ";
	}

	return 0;
}