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

	int n; in n;
	vector<bool> vec(n, false);
	int m, k; in m >> k;
	Fori(m) {
		int a; in a; vec[a - 1] = true;
	}
	Fori(k) {
		int a; in a; vec[a - 1] = true;
	}

	out n - (m + k) endl;
	Fori(vec.size())
		if (!vec[i]) out i + 1 << " ";
}