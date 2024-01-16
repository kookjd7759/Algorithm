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
	vector<pair<int, int>> vec(n);
	Fori(n) {
		vec[i].first = i;
		in vec[i].second;
	}
	sort(vec.begin(), vec.end(), [&](const pair<int, int> &a, const pair<int, int> &b) {
		return a.second < b.second;
		});

	bool* visited = new bool[n];
	Fori(n) visited[i] = false;
	int cycleCnt(0), idx(0);
	while (idx < n) {
		if (visited[idx]) idx++;
		else {
			cycleCnt++;
			while (!visited[idx]) {
				visited[idx] = true;
				idx = vec[idx].first;
			}
		}
	}
	out n - cycleCnt;
}