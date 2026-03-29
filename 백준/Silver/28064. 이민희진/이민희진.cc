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

bool can(const string& s, const string& t) {
    int n = s.size(), m = t.size();
    for (int k = 1; k <= min(n, m); ++k) {
        if (s.substr(0, k) == t.substr(m - k, k)) return true;
        if (s.substr(n - k, k) == t.substr(0, k)) return true;
    }
    return false;
}

int main() {
    Sync;
    int n; in n;
    vector<string> a(n);
    Fori(n) in a[i];
    int ans = 0;
    for (int i = 0; i < n; ++i) for (int j = i + 1; j < n; ++j) if (can(a[i], a[j])) ++ans;
    out ans;
    return 0;
}