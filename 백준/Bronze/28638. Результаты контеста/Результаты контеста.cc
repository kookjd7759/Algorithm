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
	
	int n; in n;
	int pass(0), penal(0);
	int task[26]; memset(task, 0, sizeof task);
	int ch[26]; memset(ch, false, sizeof ch);
	while (n--) {
		char b;
		string a, c; in a >> b >> c;
		int time = stoi(a.substr(0, 2)) * 60 + stoi(a.substr(3, 2));
		if (c == "CE") continue;
		else if (c == "OK") {
			if (ch[b - 'A']) continue;
			pass++;
			penal += time + 20 * task[b - 'A'];
			ch[b - 'A'] = true;
		}
		else task[b - 'A']++;
	}
	out pass spc penal;
}