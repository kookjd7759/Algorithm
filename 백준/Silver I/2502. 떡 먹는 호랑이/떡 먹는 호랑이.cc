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

	int d, k; in d >> k;
	pair<int, int> ab1{ 1, 0 }, ab2{ 0, 1 };
	Fori(d - 2) {
		pair<int, int> now = { ab1.first + ab2.first, ab1.second + ab2.second };
		ab1 = ab2;
		ab2 = now;
	}
	for (int a = 1; ; a++) {
		for (int b = a; ; b++) {
			int num = a * ab2.first + b * ab2.second;
			if (num == k) {
				out a << '\n' << b;
				return 0;
			}
			else if (num > k) break;
		}
	}
}