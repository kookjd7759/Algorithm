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
	
	while (true) {
		ll temp(0);
		vector<ll> vec(12);
		Fori(12) {
			in vec[i];
			temp += vec[i];
		}
		if (!temp) break;
		sort(vec.begin(), vec.end());
		bool ch = true;
		ll c;
		Fori(3) {
			c = vec[i * 4];
			for (int j = i * 4 + 1; j < i * 4 + 4; j++) {
				if (c != vec[j]) {
					ch = false;
					break;
				}
			}
			if (!ch) break;
		}
		out(ch ? "yes" : "no") endl;
	}
}