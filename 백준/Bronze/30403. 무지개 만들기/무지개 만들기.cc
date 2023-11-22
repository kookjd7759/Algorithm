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

	bool ROYGBIV[7]; memset(ROYGBIV, false, sizeof ROYGBIV);
	bool roygbiv[7]; memset(roygbiv, false, sizeof roygbiv);
	Testcase{
	char c; in c;
	if (c == 'R') ROYGBIV[0] = true;
	else if (c == 'O') ROYGBIV[1] = true;
	else if (c == 'Y') ROYGBIV[2] = true;
	else if (c == 'G') ROYGBIV[3] = true;
	else if (c == 'B') ROYGBIV[4] = true;
	else if (c == 'I') ROYGBIV[5] = true;
	else if (c == 'V') ROYGBIV[6] = true;
	
	if (c == 'r') roygbiv[0] = true;
	else if (c == 'o') roygbiv[1] = true;
	else if (c == 'y') roygbiv[2] = true;
	else if (c == 'g') roygbiv[3] = true;
	else if (c == 'b') roygbiv[4] = true;
	else if (c == 'i') roygbiv[5] = true;
	else if (c == 'v') roygbiv[6] = true;
	};
	bool CH = true, ch = true;
	Fori(7) if (!ROYGBIV[i]) {
		CH = false; break;
	}
	Fori(7) if (!roygbiv[i]) {
		ch = false; break;
	}

	if (CH && ch) out "YeS";
	else if (!CH && !ch) out "NO!";
	else out(CH ? "YES" : "yes");
}