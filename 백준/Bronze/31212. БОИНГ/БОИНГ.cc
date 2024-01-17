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
	
	bool A_F[6][22];
	Fori(6) Forj(22) A_F[i][j] = true;
	Fori(6) A_F[i][0] = false;
	Fori(3) A_F[i][1] = false;
	Fori(3) A_F[i][21] = false;
	A_F[5][21] = false;

	int n; string st;
	in n >> st;

	int x = st[st.length() - 1] - 'A';
	st.pop_back();
	int y = stoi(st);
	A_F[x][y] = false;

	For1i(21) {
		bool ch = false;
		Forj(6) {
			if (A_F[j][i]) {
				if (n == 0) {
					ch = true;
					break;
				}
				A_F[j][i] = false;
				n--;
			}
		}
		if (ch) break;
	}

	bool found = false;
	For1i(21) {
		bool ch = false;
		Forj(6) {
			if (A_F[j][i]) {
				found = true;
				ch = true;
				out i << (char)(j + 'A');
				break;
			}
		}
		if (ch) break;
	}

	if (!found) out "full";
}