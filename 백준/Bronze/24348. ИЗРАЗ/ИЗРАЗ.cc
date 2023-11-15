#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Fixed(x) cout << fixed; cout.precision(x);
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

	vector<ll> n(3); Fori(3) in n[i];
	sort(n.begin(), n.end());
	ll maxi(0); 
	do {
		maxi = max(maxi, n[0] * n[1] + n[2]);
		maxi = max(maxi, n[0] * n[1] - n[2]);
		maxi = max(maxi, n[0] + n[1] * n[2]);
		maxi = max(maxi, n[0] + n[1] - n[2]);
		maxi = max(maxi, n[0] - n[1] * n[2]);
		maxi = max(maxi, n[0] - n[1] + n[2]);
	} while (next_permutation(n.begin(), n.end()));
	out maxi;
}