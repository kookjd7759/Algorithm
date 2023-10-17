#include <iostream>
#include <string>

using namespace std;

int cup[200001];

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, x, k; cin >> n >> x >> k;
	for (int i = 1; i <= n; i++) cup[i] = i;
	while (k--) {
		int a, b; cin >> a >> b;
		int temp = cup[a];
		cup[a] = cup[b];
		cup[b] = temp;
	}
	for (int i = 1; i <= n; i++) 
		if (x == cup[i]) {
			cout << i;
			break;
		}
}