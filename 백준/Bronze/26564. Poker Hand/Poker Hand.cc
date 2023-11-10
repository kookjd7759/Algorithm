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

	Testcase{
	int rank[15]; memset(rank, 0, sizeof(rank));
	Fori(5) {
		string card; in card;
		if (card[0] == 'A') rank[1]++;
		else if (card[0] == 'T') rank[10]++;
		else if (card[0] == 'J') rank[11]++;
		else if (card[0] == 'Q') rank[12]++;
		else if (card[0] == 'K') rank[13]++;
		else rank[card[0] - '0']++;
	}
	int maxi(-1);
	Fori(15) maxi = max(maxi, rank[i]);
	out maxi endl;
	};
}