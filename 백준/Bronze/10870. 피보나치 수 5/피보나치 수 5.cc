#include <iostream>

using namespace std;

int P(int count) {
	if (count <= 1)
		return count;
	
	return P(count - 1) + P(count - 2);
}

int main() {
	short n; cin >> n;
	cout << P(n);

	return 0;
}