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
	Fixed(6);

	int n, m; in n >> m; m--;
	int cnt(0);
	while (n--) {
		string st; in st;
		bool eng[26]; memset(eng, false, sizeof(eng));
		bool ch = true;
		Fori(st.size()) {
			int idx = st[i] - 'A';
			if (idx > m || eng[idx]) {
				ch = false;
				break;
			}
			eng[idx] = true;
		}
		if (ch) cnt++;
	}
	out cnt;
}