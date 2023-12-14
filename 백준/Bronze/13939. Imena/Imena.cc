#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define instr(x) getline(cin, x)
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

	auto ch_last = [&](string st) -> bool {
		char c = st[st.size() - 1];
		if (c == '.' || c == '?' || c == '!') return true;
		return false;
		};

	auto ch_name = [&](string st) -> bool {
		if ('A' <= st[0] && st[0] <= 'Z') {
			bool ch = true;
			if (ch_last(st)) {
				For1i(st.size() - 2)
					if (!('a' <= st[i] && st[i] <= 'z')) {
						ch = false;
						break;
					}
			}
			else {
				For1i(st.size() - 1)
					if (!('a' <= st[i] && st[i] <= 'z')) {
						ch = false;
						break;
					}
			}
			if (ch) return true;
		}
		return false;
		};

    int n; in n;
	Fori(n) {
		int cnt(0);
		while (true) {
			string st; in st;
			if (ch_name(st)) cnt++;
			if (ch_last(st)) break;
		}
		out cnt endl;
	}
}