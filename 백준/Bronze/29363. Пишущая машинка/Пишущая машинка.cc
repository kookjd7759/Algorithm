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

static inline int lcp_len(const string & a, const string & b) {
    int L = min((int)a.size(), (int)b.size());
    int i = 0;
    while (i < L && a[i] == b[i]) ++i;
    return i;
}

int main() {
    Sync;

    int n; in n;
    vector<string> w(n);
    Fori(n) in w[i];

    long long ans = 0;

    ans += (long long)w[0].size();

    for (int i = 1; i < n; ++i) {
        int l = lcp_len(w[i - 1], w[i]);
        long long type_all = (long long)w[i].size();
        long long via_copy = 1LL + (long long)w[i - 1].size() + (long long)w[i].size() - 2LL * l; // CP + BS + type
        ans += min(type_all, via_copy);
        ans += 1;
    }

    out ans;
}