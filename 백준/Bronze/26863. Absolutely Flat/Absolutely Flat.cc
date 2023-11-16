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

	int L[4]; Fori(4) in L[i];
	sort(L, L + 4);
	int d; in d;

	bool ch = false;
	if (L[0] == L[1] && L[1] == L[2] && L[2] == L[3]) ch = true;
	L[0] += d;
	if (L[0] == L[1] && L[1] == L[2] && L[2] == L[3]) ch = true;
	out(ch ? 1 : 0);
}