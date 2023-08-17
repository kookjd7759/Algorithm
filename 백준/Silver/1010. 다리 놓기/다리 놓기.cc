#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;
ll fact[3000005], factInv[3000005], mod = 1e9 + 7;

ll mpow(ll x, ll m) {
	if (!m) return 1;
	ll tmp = mpow(x, m / 2);
	tmp = tmp * tmp % mod;
	if (m % 2) return tmp * x % mod;
	return tmp;
}

ll nCr(ll x, ll r) {
	return fact[x] * factInv[r] % mod * factInv[x - r] % mod;
}

int main() {
	fact[0] = 1;
	for (int i = 1; i <= 3000000; i++) 
		fact[i] = fact[i - 1] * i % mod;

	factInv[3000000] = mpow(fact[3000000], mod - 2);
	for (int i = 2999999; i >= 0; i--) 
		factInv[i] = factInv[i + 1] * (i + 1) % mod;

	int T; cin >> T;
	while (T--) {
		int N, M; cin >> N >> M;
		cout << nCr(M, M - N) << "\n";
	}
}