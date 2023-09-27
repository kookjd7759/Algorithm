#include <iostream>

#define ll long long

using namespace std;

ll a, b;
ll DP[55];

ll Cal(ll x) {
    ll ans = x & 1;
    for (ll i = 54; i > 0; i--) {
        if (x & ((ll)1 << i)) {
            ans += DP[i - 1] + (x - ((ll)1 << i) + 1);
            x -= (ll)1 << i;
        }
    }
    return ans;
}

int main() {
	DP[0] = 1;
	for (ll i = 1; i < 55; i++) DP[i] = DP[i - 1] * 2 + ((ll)1 << i);
	cin >> a >> b;
	cout << Cal(b) - Cal(a - 1);
}