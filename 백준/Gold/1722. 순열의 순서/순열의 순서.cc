#include <iostream>
#include <vector>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;

int main() {
	Sync;

	using ull = unsigned long long int;
	ull fact[21]; fact[0] = fact[1] = 1;
	for (int i = 2; i < 21; ++i) fact[i] = i * fact[i - 1];

	vector<int> numbers(20);
	for (int i = 0; i < 20; ++i) numbers[i] = i + 1;

	int N, ver; cin >> N >> ver;
	if (ver == 1) {
		ull k; cin >> k; k--;
		for (int i = N - 1; i >= 0; --i) {
			int idx = k / fact[i];
			cout << numbers[idx] << ' ';
			k %= fact[i];
			numbers.erase(numbers.begin() + idx);
		}
	}
	else { // ver == 2
		vector<int> vec(N);
		for (int i = 0; i < N; ++i) cin >> vec[i];

		ull ans(0);
		for (int i = 0, f = N - 1; i < N; ++i, --f) {
			int idx(-1);
			for (int j = 0; j < numbers.size(); ++j)
				if (vec[i] == numbers[j]) {
					idx = j;
					numbers.erase(numbers.begin() + idx);
					break;
				}
			ans += fact[f] * idx;
		}
		cout << ans + 1;
	}

	return 0;
}
