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

bool comp(const pair<int, string> &a, const pair<int, string> &b) {
	if (a.first == b.first)
		return a.second < b.second;
	return a.first > b.first;
}

int main() {
	Sync;

	auto getScore = [&](string st) -> int {
		bool Eng[26]; memset(Eng, false, sizeof Eng);
		Fori(st.size()) {
			if ('A' <= st[i] && st[i] <= 'Z') Eng[st[i] - 'A'] = true;
		}

		int score(0);
		Fori(26) if (Eng[i]) score++;
		return score;
		};

	int t; in t;
	For1i(t) {
		int n, maxi(0); in n;
		vector<pair<int, string>> vec(n);
		string name; instr(name);
		Forj(n) {
			instr(name);
			int score = getScore(name);
			vec[j] = { score, name };
			maxi = max(maxi, score);
		}
		sort(vec.begin(), vec.end(), comp);
		out "Case #" << i << ": ";
		Forj(n) {
			if (maxi == vec[j].first) {
				out vec[j].second endl;
				break;
			}
		}
	}
}