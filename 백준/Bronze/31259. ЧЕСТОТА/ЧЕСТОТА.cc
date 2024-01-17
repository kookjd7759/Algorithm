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
	
	int Eng[26]; memset(Eng, 0, sizeof Eng);
	int maxi(0);
	while (true) {
		string st; instr(st);

		bool Break = false;
		Fori(st.size()){
			if (st[i] == '@') {
				Break = true;
				break;
			}
			else if ('A' <= st[i] && st[i] <= 'Z')
				Eng[st[i] - 'A']++;
			else if ('a' <= st[i] && st[i] <= 'z') {
				int idx = 'a' - 'A';
				Eng[st[i] - ('A' + idx)]++;
			}
		}
		if (Break) break;
	}
	Fori(26) maxi = max(maxi, Eng[i]);
	int size = maxi;
	Fori(size) {
		Fori(26) {
			if (maxi == Eng[i]) {
				out(char)(i + 'A');
				Eng[i]--;
			}
			else out ' ';
		}
		maxi--;
		ent;
	}
	out "--------------------------\nABCDEFGHIJKLMNOPQRSTUVWXYZ";
}