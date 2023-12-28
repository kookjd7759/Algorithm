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
    Fixed(6);

	int t; in t;
	For1i(t) {
        int d, n; in d >> n;
        vector<pair<int, int>> vec;
        Forj(n) {
            int a, b; in a >> b;
            vec.push_back({ a, b });
        }

        if (vec.size() > 1) 
            sort(vec.begin(), vec.end(), 
            [&](const pair<int, int> &a, const pair<int, int> &b) -> bool {
                if (a.first == b.first) return a.second < b.second;
                return a.first < b.first;
            });

        double h = (d - vec[0].first) / (double)vec[0].second;
        For1j(vec.size() - 1)
            h = max(h, (d - vec[j].first) / (double)vec[j].second);

        out "Case #" << i << ": " << d / h endl;
	}
}