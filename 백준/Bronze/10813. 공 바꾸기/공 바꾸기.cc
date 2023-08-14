#include <iostream>

using namespace std;
int N[101];

int main() {
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; i++)
		N[i] = i;

	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		int temp = N[a];
		N[a] = N[b];
		N[b] = temp;
	}

	for (int i = 1; i <= n; i++)
		cout << N[i] << " ";
}

