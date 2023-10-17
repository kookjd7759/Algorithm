#include <iostream>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		ll sum(0);
		for (int i = 0; i < n; i++) {
			ll temp; cin >> temp;
			sum += temp % n;
		}
		sum % n == 0 ? cout << "YES\n" : cout << "NO\n";
	}
}