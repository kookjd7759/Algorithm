#include <iostream>
#include <cmath>

#define sync ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

using namespace std;

int main() {
	sync;
	ll a, b; cin >> a >> b;
	ll s = min(a, b), e = max(a, b);
	if (e - s - 1 <= 0) cout << 0 << "\n";
	else cout << e - s - 1 << "\n";
	for (ll i = s + 1; i < e; i++)
		cout << i << " ";
}