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

	int t; in t;
	string st; getline(cin, st);
	while (t--) {
		getline(cin, st);
		int cnt(0), idx(0);
		Fori(st.size()) {
			if (st[i] == ' ') cnt++;
			if (cnt == 2) {
				idx = i + 1;
				break;
			}
		}
		out st.substr(idx, st.size()) << " ";
		out st.substr(0, idx) endl;
	}
}