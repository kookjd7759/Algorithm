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
#define Roop(x) while(x--) 

using namespace std;

int main() {
	Sync;
	int eng[26]; memset(eng, 0, sizeof(eng));
	string st; in st;
	Fori(st.size()) eng[st[i] - 'a']++;
	bool even = false, odd = false;
	Fori(26) {
		if (eng[i] == 0) continue;
		if (eng[i] & 1) odd = true;
		else even = true;
	}
	if (even && odd) out 2;
	else out(even ? 0 : 1);
}