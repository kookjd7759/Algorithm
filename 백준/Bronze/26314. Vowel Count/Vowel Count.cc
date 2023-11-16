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
	while (n--) {
		string st; in st;
		int cnt(0);
		Fori(st.size()) {
			if (st[i] == 'a') cnt++;
			else if (st[i] == 'e') cnt++;
			else if (st[i] == 'i') cnt++;
			else if (st[i] == 'o') cnt++;
			else if (st[i] == 'u') cnt++;
		}
		out st endl;
		if (st.size() - cnt < cnt) out 1;
		else out 0;
		ent;
	}
}