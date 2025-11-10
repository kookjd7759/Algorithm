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

int main() {
    Sync;

    string s; in s;
    int N; in N;
    int ans = N;
    for (int i = 1; i <= N; ++i) {
        string t; in t;
        if (t.size() == s.size()) {
            int diff = 0;
            for (size_t k = 0; k < s.size(); ++k) if (s[k] != t[k]) ++diff;
            if (diff == 1) ans = min(ans, i);
        }
    }
    out ans << "\n";
    return 0;
}
