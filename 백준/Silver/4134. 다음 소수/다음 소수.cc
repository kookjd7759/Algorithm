#include <iostream>

using namespace std;

bool IsPrime(const long long a) {
	if (a <= 1)
		return false;

	for (long long i = 2; i * i <= a; i++) {
		if (a % i == 0)
			return false;
	}
	return true;
}

int main() {
	long long N; cin >> N;
	while (N--) {
		long long num; cin >> num;
		while (!IsPrime(num)) 
			num++;
		cout << num << "\n";
	}
}