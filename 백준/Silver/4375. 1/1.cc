#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	while (scanf("%d", &n) != EOF) {
		if (n == 1)
			cout << 1 << "\n";
		else {
			int result = 1;
			for (long long a = 1; (a * 10 + 1) % n; result++, a = (a * 10 + 1) % n);
			cout << result + 1 << "\n";
		}
	}
}