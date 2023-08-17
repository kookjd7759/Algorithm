#include <iostream>

using namespace std;
typedef long long ll;

ll fact(ll num) {
	if (num != 0)
		return num * fact(num - 1);
	else
		return 1;
}


int main() {
	ll N; cin >> N;
	cout << fact(N);
}