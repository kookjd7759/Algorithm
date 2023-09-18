#include <iostream>
#include <map>

#define ll long long

using namespace std;

const ll NUM = 1000000007;
map<ll, ll> m;

ll F(ll n){
	if (!n) return 0;
	if (n == 1 || n == 2) return 1;
	if (m.count(n)) return m[n];
	
	if (n & 1){ // odd
		ll a = F((n >> 1) + 1);
		ll b = F(n >> 1);
		m[n] = ((a * a) % NUM + (b * b) % NUM) % NUM;
		return m[n];
	}
	else { // even
		ll a = F((n >> 1)- 1);
		ll b = F(n >> 1);
		m[n] = ((2 * a + b) % NUM * b % NUM) % NUM;
		return m[n];
	}
}

int main() {
	ll n; cin >> n;
	cout << F(n);
}