#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Fixed(x) cout << fixed; cout.precision(x);
#define Interactive cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define in cin >>
#define out cout <<
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define Fori(x) for (int i = 0; i < x; i++)
#define Forj(x) for (int j = 0; j < x; j++)
#define Fork(x) for (int k = 0; k < x; k++)
#define For1i(x) for (int i = 1; i <= x; i++)
#define For1j(x) for (int j = 1; j <= x; j++)
#define For1k(x) for (int k = 1; k <= x; k++)
#define Testcase int tc; in tc; while(tc--) 

using namespace std;

int main() {
	Sync;

	int n, q; in n >> q;
	ll arr[1001]; memset(arr, 0, sizeof arr);
	For1i(n) in arr[i];
	while (q--) {
		int v; in v;
		if (v == 1) {
			int a, b; in a >> b;
			ll sum(0);
			for (int i = a; i <= b; i++) sum += arr[i];
			out sum endl;
			swap(arr[a], arr[b]);
		}
		else {
			int a, b, c, d; in a >> b >> c >> d;
			ll sum(0), sum2(0);
			for (int i = a; i <= b; i++) sum += arr[i];
			for (int i = c; i <= d; i++) sum2 += arr[i];
			out sum - sum2 endl;
		}
	}
}