#include <iostream>

#define ll long long

int64_t Mobius[1000010];

using namespace std;

ll K;

void Create_Mobius() {
	Mobius[1] = 1;
	for (ll i = 1; i <= 1000000; i++)
		for (ll j = 2 * i; j <= 1000000; j += i)
			Mobius[j] -= Mobius[i];
}

ll Cal(ll n) {
	ll sum = 0;
	for (ll i = 1; i * i <= n; i++)
		sum += Mobius[i] * (n / (i * i));

	return sum;
}

int main() {
	Create_Mobius();
	cin >> K;
	ll l = 0, r = 1e12;

	while (l < r - 1) {
		ll m = (l + r)/2;
		if(m - Cal(m) < K) l = m;
		else r = m;
	}

	cout << r;

	return 0;
}