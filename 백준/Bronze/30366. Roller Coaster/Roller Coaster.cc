#include <iostream>

using namespace std;

int p[100000];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	int n, m; cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> p[i];

	int t(0), sum(0);
	for (int i = 0; i < n; i++) {
		sum += p[i];
		if (sum <= m) cout << t << "\n";
		else {
			cout << ++t << "\n";
			sum = p[i];
		}
	}
}