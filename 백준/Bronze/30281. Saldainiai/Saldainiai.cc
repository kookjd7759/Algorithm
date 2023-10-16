#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n[1000];
	int N; cin >> N;
	for (int i = 0; i < N; i++) cin >> n[i];
	sort(n, n + N);

	int prevOdd(0), sum(0);
	for (int i = N - 1; i >= 0; i--) {
		if (n[i] & 1) {
			if (prevOdd == 0) prevOdd = n[i];
			else { 
				sum += prevOdd + n[i];
				prevOdd = 0;
			}
		}
		else sum += n[i];
	}
	cout << sum / 2;
}