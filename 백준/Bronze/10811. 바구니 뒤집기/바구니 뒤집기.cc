#include <iostream>

using namespace std;
int N[101];

int main() {
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; i++)
		N[i] = i;

	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		int size;

		if ((b - a) % 2 == 1)
			size = (b - a) / 2 + 1;
		else
			size = (b - a) / 2;

		for (int j = 0; j < size; j++) {
			int temp = N[b - j];
			N[b - j] = N[a + j];
			N[a + j] = temp;
		}
	}

	for (int i = 1; i <= n; i++)
		cout << N[i] << " ";
}

