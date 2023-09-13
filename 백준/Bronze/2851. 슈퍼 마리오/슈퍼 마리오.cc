#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int s(10);
	int sum(0);
	int prev = 0;
	int result;
	while (s--) {
		int a; cin >> a;
		sum += a;
		if (100 - sum <= 0) {
			if (abs(100 - sum) <= abs(100 - prev))
				result = sum;
			else
				result = prev;
			break;
		}
		prev = sum;
		result = sum;
	}
	cout << result;
}