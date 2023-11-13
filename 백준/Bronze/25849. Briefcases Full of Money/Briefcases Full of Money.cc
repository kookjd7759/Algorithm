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

	int coin[6]; Fori(6) in coin[i];
	int n[6]{ 1,5,10,20,50,100 };
	int value[6]; Fori(6) value[i] = coin[i] * n[i];

	int maxi(-1), idx(-1);
	Fori(6) {
		if (maxi <= value[i]) {
			maxi = value[i];
			idx = i;
		}
	}

	out n[idx];
}