#include <iostream>
#include <cstring>
#include <vector>
#include <queue>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

using namespace std;


int main() {
	Sync;

	using ll = long long int;
	while (true) {
		ll n; cin >> n;
		if (!n) break;
		ll sum(0);
		for (ll a = 1; a <= n; ++a) for (ll b = 1; b <= n; ++b) sum += a * b;
		cout << sum << "\n";
	}

	return 0;
}
