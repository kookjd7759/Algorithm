#include <iostream>
#include <cstring>

using namespace std;

int f[100001];

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	memset(f, 0, sizeof(f));
	int n, m; cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		f[a]++; f[b]++;
	}

	for (int i = 1; i <= n; i++) {
		cout << f[i] << "\n";
	}
}