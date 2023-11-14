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

	int f[2], s[2]; in f[0] >> f[1] >> s[0] >> s[1];
	sort(f, f + 2); sort(s, s + 2);
	if (f[1] < s[0] || f[0] > s[1]) out(f[1] - f[0] + 1) + (s[1] - s[0] + 1);
	else if (f[1] == s[0] || f[0] == s[1]) out(f[1] - f[0] + 1) + (s[1] - s[0] + 1) + 1;
	else out(max(f[1], s[1]) - min(f[0], s[0])) + 1;\
}