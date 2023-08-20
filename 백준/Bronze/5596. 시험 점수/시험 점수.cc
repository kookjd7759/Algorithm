#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < 4; i++) {
		int num; cin >> num;
		sum1 += num;
	}
	for (int i = 0; i < 4; i++) {
		int num; cin >> num;
		sum2 += num;
	}
	cout << max(sum1, sum2);
}