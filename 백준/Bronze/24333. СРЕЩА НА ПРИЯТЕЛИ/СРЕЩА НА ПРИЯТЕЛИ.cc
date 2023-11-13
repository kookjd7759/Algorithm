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

	int l1, r1, l2, r2, k; in l1 >> r1 >> l2 >> r2 >> k;
	if (l1 < l2) l1 = l2;
	if (r1 > r2) r1 = r2;

	if (r1 < l1) out 0;
	else if (l1 == r1) {
		if (l1 == k) out 0;
		else out 1;
	}
	else if (l1 <= k && k <= r1) out r1 - l1;
	else out r1 - l1 + 1;
}