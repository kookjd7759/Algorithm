#include <iostream>
#include <cstring>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int ret(0), fence[101], a[4]; memset(fence, 0, sizeof(fence));
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	for (int i = a[0]; i < a[1]; i++) fence[i]++;
	for (int i = a[2]; i < a[3]; i++) fence[i]++;
	for (int i = 0; i <= 100; i++) if (fence[i]) ret++;
	cout << ret;
}