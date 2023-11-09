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

	bool cards_SBVK[4][13]; memset(cards_SBVK, false, sizeof(cards_SBVK));
	Fori(51) {
		char c; int n; in c >> n; n--;
		if (c == 'S') cards_SBVK[0][n] = true;
		else if (c == 'B') cards_SBVK[1][n] = true;
		else if (c == 'V') cards_SBVK[2][n] = true;
		else cards_SBVK[3][n] = true;
	}
	Fori(4) Forj(13) if (!cards_SBVK[i][j]) {
		if (i == 0) out "S ";
		else if (i == 1) out "B ";
		else if (i == 2) out "V ";
		else if (i == 3) out "K ";
		out j + 1;
	}
}