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

	string team1, team2; getline(cin, team1); getline(cin, team2);
	int score1(0), score2(0);
	int n; in n;
	string st; in st;
	Fori(n) {
		if (score1 == 7 || score2 == 7) break;
		if (i & 1) {
			if (st[i] == 'H') score2 += 1;
			else if (st[i] == 'D') score2 == 6 ? score2++ : score2 += 2;
			else if (st[i] == 'O') score1++;
		}
		else {
			if (st[i] == 'H') score1 += 1;
			else if (st[i] == 'D') score1 == 6 ? score1++ : score1 += 2;
			else if (st[i] == 'O') score2++;
		}
	}

	out team1 spc score1 spc team2 spc score2 << ". ";
	if (score1 == 7)
		out team1 << " has won.";
	else if (score2 == 7)
		out team2 << " has won.";
	else if (score1 > score2)
		out team1 << " is winning.";
	else if (score1 < score2)
		out team2 << " is winning.";
	else out "All square.";
}