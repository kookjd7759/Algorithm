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

struct Prize {
    ll v; vector<int> t;
};

static int n, m;
static vector<Prize> pz;
static unordered_map<string, ll> memo;

static inline ll ubound(int idx, const vector<unsigned char>& c) {
    ll ub = 0;
    for (int j = idx; j < n; ++j) {
        int mn = 1e9;
        for (int s : pz[j].t) mn = min(mn, (int)c[s]);
        ub += pz[j].v * (ll)mn;
    }
    return ub;
}

static ll dfs(int idx, vector<unsigned char>& c) {
    if (idx == n) return 0;
    string key; key.reserve(1 + m);
    key.push_back((char)idx);
    Fori(m) key.push_back((char)c[i]);
    auto it = memo.find(key);
    if (it != memo.end()) return it->second;

    ll best = 0, ub = ubound(idx, c);
    int mx = 1e9;
    for (int s : pz[idx].t) mx = min(mx, (int)c[s]);

    for (int x = mx; x >= 0; --x) {
        if (best >= ub) break;
        if (x) {
            for (int s : pz[idx].t) c[s] = (unsigned char)(c[s] - x);
            ll val = pz[idx].v * (ll)x + dfs(idx + 1, c);
            for (int s : pz[idx].t) c[s] = (unsigned char)(c[s] + x);
            if (val > best) best = val;
        }
        else {
            ll val = dfs(idx + 1, c);
            if (val > best) best = val;
        }
    }

    memo[key] = best;
    return best;
}

int main() {
    Sync;

    int T; in T;
    while (T--) {
        in n >> m;
        pz.assign(n, {});
        Fori(n) {
            int k; in k;
            vector<int> t(k);
            Forj(k) { in t[j]; --t[j]; }
            ll v; in v;
            pz[i].v = v; pz[i].t = move(t);
        }
        vector<unsigned char> c(m);
        Fori(m) { int x; in x; c[i] = (unsigned char)x; }

        sort(pz.begin(), pz.end(), [&](const Prize& a, const Prize& b) {
            if (a.v != b.v) return a.v > b.v;
            return a.t.size() < b.t.size();
            });

        memo.clear();
        ll ans = dfs(0, c);
        out ans endl;
    }

    return 0;
}
