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
		string st; in st;
		if (st == "#") break;

		int y(0), n(0), a(0);
		Fori(st.size()) {
			if (st[i] == 'Y') y++;
			else if (st[i] == 'N') n++;
			else if(st[i] == 'A') a++;
		}

        int size = st.size();
        if (size & 1) size++;

		if (a >= size / 2) out "need quorum";
		else if (y == n) out "tie";
		else if (y > n) out "yes";
		else if (y < n) out "no";
		ent;
	}
}