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

	int N; string s, ans = "0000000000";
	in N >> s;
	for (auto& l : s) {
		if (l == 'L') {
			Fori(10) if (ans[i] == '0') {
					ans[i] = '1';
					break;
				}
		}
		else if (l == 'R') {
			for (int i = 9; i > -1; i--) {
				if (ans[i] == '0') {
					ans[i] = '1';
					break;
				}
			}
		}
		else ans[l - '0'] = '0';
	}

	out ans;
}