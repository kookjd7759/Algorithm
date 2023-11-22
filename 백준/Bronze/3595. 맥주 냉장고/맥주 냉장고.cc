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

	int n; in n;
	int mini(2e9), ret[3] = { 1,1,1 };
	For1i(n / 2) {
		if (n % i == 0) {
			For1j(n / 2) {
				if (n % (i * j) == 0) {
					int k = n / (i * j);
					if (mini > (i * j) * 2 + (i * k) * 2 + (j * k) * 2) {
						mini = (i * j) * 2 + (i * k) * 2 + (j * k) * 2;
						ret[0] = i;
						ret[1] = j;
						ret[2] = k;
					}
				}
			}
		}
	}
	Fori(3) out ret[i] << " ";
}