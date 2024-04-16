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
#define nonecountingTC int tc; in tc; while(tc--) 
#define countingTC int tc; in tc; for (int TCcounter = 1; TCcounter <= tc; TCcounter++) 

using namespace std;

int main() {
	Sync;

	bool RAKTAS[6]; memset(RAKTAS, false, sizeof RAKTAS);
	int size(0);
	auto putIn = [&](char c) -> bool {
		if (c == 'R' && !RAKTAS[0]) RAKTAS[0] = true, size++;
		else if (c == 'A' && (!RAKTAS[1] || !RAKTAS[4])) {
			RAKTAS[1] ?
				RAKTAS[4] = true : RAKTAS[1] = true;
			size++;
		}
		else if (c == 'K' && !RAKTAS[2]) RAKTAS[2] = true, size++;
		else if (c == 'T' && !RAKTAS[3]) RAKTAS[3] = true, size++;
		else if (c == 'S' && !RAKTAS[5]) RAKTAS[5] = true, size++;

		return size == 6;
		};

	int n, cnt(0); in n;
	string st; in st;
	Fori(n) {
		cnt++;
		bool ret = putIn(st[i]);
		if (ret) break;
	}
	out cnt;
}