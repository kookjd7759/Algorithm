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

static int n, m, bestC;
static vector<vector<int>> adj;
static vector<int> col, bestCol, degv, satCnt, uncolored;
static vector<unsigned long long> satLo, satHi;

static inline int hasBit(int v, int c) {
    if (c <= 64) return (satLo[v] >> (c - 1)) & 1ULL;
    return (satHi[v] >> (c - 65)) & 1ULL;
}
static inline void setBit(int v, int c) {
    if (c <= 64) satLo[v] |= 1ULL << (c - 1);
    else satHi[v] |= 1ULL << (c - 65);
}
static inline void clrBit(int v, int c) {
    if (c <= 64) satLo[v] &= ~(1ULL << (c - 1));
    else satHi[v] &= ~(1ULL << (c - 65));
}

static inline int pickVertex() {
    int v = -1, bs = -1, bd = -1;
    for (int u : uncolored) {
        int s = satCnt[u], d = degv[u];
        if (s > bs || (s == bs && d > bd)) bs = s, bd = d, v = u;
    }
    return v;
}

static inline int okColor(int v, int c) {
    for (int u : adj[v]) if (col[u] == c) return 0;
    return 1;
}

static void dfs(int colored, int usedC) {
    if (usedC >= bestC) return;
    if (colored == n) { bestC = usedC; bestCol = col; return; }

    int v = pickVertex();
    vector<pair<int, int>> changes;
    changes.reserve(adj[v].size());

    for (int c = 1; c <= usedC + 1 && c < bestC; ++c) {
        if (!okColor(v, c)) continue;
        col[v] = c;

        int oldUsed = usedC; if (c == usedC + 1) usedC++;

        vector<int> newUnc; newUnc.reserve(uncolored.size() - 1);
        for (int u : uncolored) if (u != v) newUnc.push_back(u);
        uncolored.swap(newUnc);

        changes.clear();
        for (int u : adj[v]) if (col[u] == 0 && !hasBit(u, c)) { setBit(u, c); satCnt[u]++; changes.push_back({ u, c }); }

        dfs(colored + 1, usedC);

        for (auto& p : changes) { clrBit(p.first, p.second); satCnt[p.first]--; }

        uncolored.swap(newUnc);
        uncolored.push_back(v);

        usedC = oldUsed;
        col[v] = 0;
    }
}

int main() {
    Sync;

    in n >> m;
    adj.assign(n + 1, {});
    degv.assign(n + 1, 0);
    Fori(m) {
        int a, b; in a >> b;
        adj[a].push_back(b); adj[b].push_back(a);
        degv[a]++; degv[b]++;
    }

    col.assign(n + 1, 0);
    bestCol.assign(n + 1, 0);
    satCnt.assign(n + 1, 0);
    satLo.assign(n + 1, 0);
    satHi.assign(n + 1, 0);
    uncolored.clear(); uncolored.reserve(n);
    For1i(n) uncolored.push_back(i);

    bestC = n + 1;
    dfs(0, 0);

    if (bestC == n + 1) { out 0 endl; return 0; }

    vector<vector<int>> teams(bestC + 1);
    For1i(n) teams[bestCol[i]].push_back(i);

    out bestC endl;
    For1i(bestC) {
        Forj((int)teams[i].size()) { out teams[i][j]; if (j + 1 < (int)teams[i].size()) out " "; }
        ent;
    }

    return 0;
}
