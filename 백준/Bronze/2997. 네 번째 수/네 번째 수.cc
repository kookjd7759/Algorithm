#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n[3]; cin >> n[0] >> n[1] >> n[2];
	sort(n, n + 3);
	if (n[2] - n[1] == n[1] - n[0]) cout << n[2] + (n[2] - n[1]);
	else if (n[2] - n[1] > n[1] - n[0]) cout << n[1] + (n[1] - n[0]);
	else  cout << n[0] + (n[2] - n[1]);
}