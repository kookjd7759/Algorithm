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

	int wm[4], sum(0); Fori(4) in wm[i], sum += wm[i];
	int mini(2e9);
	Fori(4) mini = min(mini, abs(sum - wm[i] * 2));
	for (int i = 0; i < 4; i++) for (int j = i + 1; j < 4; j++) 
		mini = min(mini, abs(sum - (wm[i] + wm[j]) * 2));
	out mini;
}