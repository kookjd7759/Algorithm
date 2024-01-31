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
		double d; int n;
		in d >> n;
		if (d <= 0.0000000001 && !n) break;

		vector<pair<double, double>> vec(n);
		bool* ch = new bool[n];
		fill_n(ch, n, false);
		Fori(n) in vec[i].first >> vec[i].second;
		
		Fori(n - 1) {
			for (int j = i + 1; j < n; j++) {
				double x = abs(vec[i].first - vec[j].first);
				double y = abs(vec[i].second - vec[j].second);
				double distance = sqrt(x * x + y * y);
				if (distance <= d) ch[i] = true, ch[j] = true;
			}
		}
		int cnt(0);
		Fori(n) if (ch[i]) cnt++;

		out cnt << " sour, " << n - cnt << " sweet" endl;
	}
}