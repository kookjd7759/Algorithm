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
	
	auto StringId = [&](string st) -> string {
		return st.substr(1, st.size() - 1);
		};

	while (true) {
		int n; in n;
		if (!n) break;

		vector<string> vec(n);
		Fori(n) in vec[i];

		int cnt(0);
		while (true) {
			vector<string> temp(n);
			bool ch1 = true, ch2 = true;
			Fori(n) {
				temp[i] = StringId(vec[i]);
				if (temp[i].empty()) {
					ch1 = false;
					break;
				}
			}
			Fori(n - 1) for (int j = i + 1; j < n; j++) {
				if (temp[i] == temp[j]) {
					ch2 = false;
					break;
				}
			}

			if (ch1 && ch2) {
				cnt++;
				vec = temp;
			}
			else break;
		}
		out cnt endl;
	}
}