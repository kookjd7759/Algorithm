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

ll Gcd(ll a, ll b) { return b ? Gcd(b, a % b) : a; }

ll Lcm(ll a, ll b) { return a / Gcd(a, b) * b; }

ll ExtGcd(ll a, ll b, ll &x, ll &y) {
    if (!b) return x = 1, y = 0, a;
    ll x1, y1, g = ExtGcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

bool MergeCRT(ll a1, ll m1, ll a2, ll m2, ll &a, ll &m) {
    ll x, y, g = ExtGcd(m1, m2, x, y);
    ll diff = a2 - a1;
    if (diff % g) return false;
    ll l = m1 / g * m2;
    __int128 t = (__int128)(diff / g) * x;
    ll mod = m2 / g;
    ll k = (ll)((t % mod + mod) % mod);
    a = (a1 + (__int128)m1 * k) % l;
    if (a < 0) a += l;
    m = l;
    return true;
}

int main() {
    Sync;

    int n; in n;
    vector<vector<int>> allow(21);
    for (int p = 1; p <= 20; ++p) {
        allow[p].resize(p, 1);
    }

    Fori(n) {
        int r, g; in r >> g;
        int p = r + g;
        vector<int> ok(p, 0);
        for (int x = r; x < p; ++x) ok[x] = 1;
        for (int x = 0; x < p; ++x) allow[p][x] &= ok[x];
    }

    vector<pair<int, vector<int>>> groups;
    for (int p = 2; p <= 20; ++p) {
        vector<int> v;
        Fori(p) if (allow[p][i]) v.push_back(i);
        if (!v.empty()) groups.push_back({p, v});
        else {
            bool used = false;
            for (int q = 2; q <= 20; ++q) if ((int)allow[q].size() == q) {
                if (count(allow[q].begin(), allow[q].end(), 0) == q) used = true;
            }
        }
    }

    for (int p = 2; p <= 20; ++p) {
        bool appeared = false;
        Fori(n) {}
    }

    cin.clear();

    vector<pair<int,int>> inp(n);
    cin.seekg(0);
    in n;
    Fori(n) in inp[i].first >> inp[i].second;

    vector<int> usedP(21, 0);
    Fori(n) usedP[inp[i].first + inp[i].second] = 1;
    for (int p = 2; p <= 20; ++p) if (usedP[p]) {
        bool any = false;
        Fori(p) if (allow[p][i]) any = true;
        if (!any) {
            out -1 endl;
            return 0;
        }
    }

    groups.clear();
    for (int p = 2; p <= 20; ++p) if (usedP[p]) {
        vector<int> v;
        Fori(p) if (allow[p][i]) v.push_back(i);
        groups.push_back({p, v});
    }

    sort(groups.begin(), groups.end(), [&](auto &A, auto &B) {
        return A.second.size() < B.second.size();
    });

    ll ans = -1;

    function<void(int,ll,ll)> Dfs = [&](int idx, ll a, ll m) {
        if (idx == (int)groups.size()) {
            if (a == 0) a += m;
            if (ans == -1 || a < ans) ans = a;
            return;
        }
        int p = groups[idx].first;
        for (int r : groups[idx].second) {
            ll na, nm;
            if (!MergeCRT(a, m, r, p, na, nm)) continue;
            ll cand = na == 0 ? nm : na;
            if (ans != -1 && cand >= ans) continue;
            Dfs(idx + 1, na, nm);
        }
    };

    Dfs(0, 0, 1);
    out ans endl;

    return 0;
}