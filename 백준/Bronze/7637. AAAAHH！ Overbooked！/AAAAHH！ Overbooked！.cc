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

int Conv(string s) {
    return ((s[0] - '0') * 10 + (s[1] - '0')) * 60 + (s[3] - '0') * 10 + (s[4] - '0');
}

int main() {
    Sync;

    int N;
    while (in N, N) {
        vector<pair<int,int>> v;
        Fori(N) {
            string s; in s;
            int st = Conv(s.substr(0, 5)), en = Conv(s.substr(6, 5));
            v.push_back({st, en});
        }

        sort(v.begin(), v.end());
        bool ok = true;
        for (int i = 1; i < N; ++i) if (v[i].first < v[i - 1].second) ok = false;
        out (ok ? "no conflict" : "conflict") endl;
    }

    return 0;
}