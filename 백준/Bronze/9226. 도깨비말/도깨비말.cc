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

	string st;
	while (true) {
		in st;
		if (st == "#") break;

		queue<char> que;
		if (st[0] == 'a' || st[0] == 'e' || st[0] == 'i' || st[0] == 'o' || st[0] == 'u')
			out st << "ay" endl;

		else {
			que.push(st[0]);
			For1i(st.size() - 1) {
				if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u') {
					out st.substr(i, st.size() - i);
					break;
				}
				else que.push(st[i]);
			}
			while (!que.empty()) {
				out que.front();
				que.pop();
			}
			out "ay" endl;
		}
	}
}