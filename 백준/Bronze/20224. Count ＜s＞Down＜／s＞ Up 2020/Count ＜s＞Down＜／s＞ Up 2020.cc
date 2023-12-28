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
		int n; in n;
		if (!n) break;

		vector<int> vec(n);
		Fori(n) in vec[i];

		if (vec.size() < 4) out 0;
		else {
			int cnt(0);
			Fori(vec.size() - 3) if (vec[i] == 2 && vec[i + 1] == 0 &&
				vec[i + 2] == 2 && vec[i + 3] == 0)
				cnt++;
			out cnt;
		}
		ent;
	}
}