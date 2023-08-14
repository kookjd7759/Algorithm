#include <iostream>

using namespace std;
int N[101];

int main() {
	int n, m; cin >> n >> m;
	for (int i_ = 0; i_ < m; i_++) {
		int i, j, k; cin >> i >> j >> k;
		for (int j_ = i; j_ <= j; j_++)
			N[j_] = k;
	}

	for (int i = 1; i <= n; i++)
		cout << N[i] << " ";
}

