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

string note[1001];
map<string, int> f;

int main() {
	Sync;

	int n; in n;
	For1i(n) in note[i];
	For1i(n) {
		string temp = "";
		temp.push_back(note[i][0]);
		if (f.count(temp) == 0) f.insert({ temp, i });
		for (int j = 1; j < note[i].size() - 1; j++) {
			temp.push_back(note[i][j]);
			if (f.count(temp) == 0) f.insert({ temp, i });
		}
	}
	/*
	for (auto iter : f)
		out iter.first spc iter.second endl;
		*/
	For1i(n) {
		string temp = "";
		temp.push_back(note[i][note[i].size() - 1]);
		if (f.count(temp) > 0) {
			out f[temp] spc i;
			exit(0);
		}
		for (int j = note[i].size() - 2; j > 0; j--) {
			temp = note[i][j] + temp;
			// out temp endl;
			if (f.count(temp) > 0) {
				out f[temp] spc i;
				exit(0);
			}
		}
	}
}