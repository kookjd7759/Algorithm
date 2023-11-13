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

	auto check = [&](int* t) -> bool {
		if (pow(t[0], 2) + pow(t[1], 2) == pow(t[2], 2))
			return true;
		else if (pow(t[0], 2) + pow(t[2], 2) == pow(t[1], 2))
			return true;
		else if (pow(t[1], 2) + pow(t[2], 2) == pow(t[0], 2))
			return true;
		return false;
		};

	Testcase{
	int t1[3]; Fori(3) in t1[i];
	int t2[3]; Fori(3) in t2[i];
	if (!check(t1) || !check(t2)) out "NO" endl;
	else {
		sort(t1, t1 + 3);
		sort(t2, t2 + 3);
		bool ch = true;
		Fori(3) if (t1[i] != t2[i]) {
			ch = false;
			break;
		}
		out(ch ? "YES" : "NO") endl;
	}
	};
}