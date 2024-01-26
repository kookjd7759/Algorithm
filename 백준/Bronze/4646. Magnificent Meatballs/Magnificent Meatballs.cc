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

		int p, sum(0);
		vector<int> vec;
		vec.emplace_back(0);
		For1i(n) {
			int a; in a;
			sum += a;
			vec.emplace_back(vec[i - 1] + a);
		}

		bool ch = false;
		For1i(n) {
			if (vec[i] == sum - vec[i]) {
				ch = true;
				out "Sam stops at position " << i << " and Ella stops at position " << i + 1 << ".";
			}
		}
		if (!ch) out "No equal partitioning.";
		ent;
	}
}