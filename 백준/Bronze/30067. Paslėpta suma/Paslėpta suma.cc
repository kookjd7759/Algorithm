#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	int n;
	long long ret(0); 
	while (cin >> n) {
		ret += n;
	}

	cout << ret / 2;
}