#include <bits/stdc++.h>

#define Sync ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Fixed(x) cout << fixed; cout.precision(x)
#define Interactive cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define spc << " " <<
#define endl << "\n"
#define ent cout << "\n"
#define out cout <<
#define in cin >> 
#define Fori(x) for (int i = 0; i < x; ++i)
#define Forj(x) for (int j = 0; j < x; ++j)
#define Fork(x) for (int k = 0; k < x; ++k)
#define For1i(x) for (int i = 1; i <= x; ++i)
#define For1j(x) for (int j = 1; j <= x; ++j)
#define For1k(x) for (int k = 1; k <= x; ++k)

using namespace std;

int Dist(const vector<string> &a, const vector<string> &b) {
    int ret = 0;
    Fori(5) Forj(5) ret += (a[i][j] != b[i][j]);
    return ret;
}

int main() {
    Sync;

    int n, K; in n >> K;
    vector<vector<string>> db(n, vector<string>(5)), q(K, vector<string>(5));
    Fori(n) Forj(5) in db[i][j];
    Fori(K) Forj(5) in q[i][j];

    For1i(K) {
        int best = 1e9;
        vector<int> ans;
        Forj(n) {
            int d = Dist(q[i - 1], db[j]);
            if (d < best) best = d, ans.clear(), ans.push_back(j + 1);
            else if (d == best) ans.push_back(j + 1);
        }
        out "Data Set " << i << ":" endl;
        Forj((int)ans.size()) {
            if (j) out " ";
            out ans[j];
        }
        ent;
        ent;
    }

    return 0;
}