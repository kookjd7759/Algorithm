#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, a; cin >> n >> a;
	int sum(0);
	for (int i = 0; i < n; i++) {
		int temp; cin >> temp;
		sum += temp / a;
	}
	cout << sum;
}