#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N = 1;
	while (N != 0) {
		cin >> N;

		int ans = 0;

		bool* Arr = new bool[2 * N + 1]{};

		Arr[0] = true; Arr[1] = true;

		for (int i = 2; i * i <= 2 * N; i++) {
			if (!Arr[i]) {
				for (int j = i * 2; j <= 2 * N; j += i) {
					if (Arr[j] == false)
						Arr[j] = true;
				}
			}
		}

		for (int i = N + 1; i <= 2 * N; i++) {
			if (!Arr[i])
				ans++;
		}

		if (N != 0)
			cout << ans << "\n";
	}
	return 0;
}