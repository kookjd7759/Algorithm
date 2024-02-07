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
    Fixed(7);

    int k; in k;
    vector<pair<int, int>> vec(k);
    double mini(0x3f3f3f3f);
    Fori(k) in vec[i].first >> vec[i].second;
    Fori(k) {
        double t(0.0), cx(vec[i].first), cy(vec[i].second);
        Forj(k) {
            if (i == j) continue;
            t += sqrt((cx - vec[j].first) * (cx - vec[j].first) +
                (cy - vec[j].second) * (cy - vec[j].second));
        }
        mini = min(mini, t / (k - 1));
    }
    out mini;
}