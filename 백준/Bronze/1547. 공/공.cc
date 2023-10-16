#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int arr[4]{ 0, 1, 2, 3 };
	int m; cin >> m;
	while (m--) {
		int a, b; cin >> a >> b;
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}
	for (int i = 1; i < 4; i++)
		if (arr[i] == 1)
			cout << i;
}